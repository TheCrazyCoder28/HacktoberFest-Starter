import javafx.application.Application; 
import javafx.geometry.Insets; 
import javafx.geometry.Pos; 
import javafx.scene.Scene; 
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.control.TextField; 
import javafx.stage.Stage; 
import javafx.event.ActionEvent; 
import javafx.event.EventHandler; 
public class Shop extends Application { 
   @Override 
   public void start(Stage stage) {      
	   Label lbl2 = new Label("European euro");
       TextField euro = new TextField();
       //Dollar Field
       Label lbl3 = new Label("U.S. dollar");
       TextField usd = new TextField();
       HBox hbox = new HBox(10);
       hbox.getChildren().addAll(lbl2,euro,lbl3,usd);
       hbox.setPadding(new Insets(20));
       //Buttons
       Button euroBtn = new Button("Euro");
       Button dollarBtn = new Button("Dollar");
       HBox hbox1 = new HBox(200);
       hbox1.setPadding(new Insets(0,0,20,0));
       hbox1.getChildren().addAll(euroBtn,dollarBtn);
       hbox1.setAlignment(Pos.CENTER);
       VBox vbox = new VBox(5);
       vbox.getChildren().addAll(hbox,hbox1);
       Scene scene = new Scene(vbox);
       stage.setTitle("Currency convertor");
       stage.setScene(scene);
       stage.show();
      
       
      
      EventHandler<ActionEvent> convertToUSD = new EventHandler<ActionEvent>() { 
          public void handle(ActionEvent e)  { 
        	     String str = euro.getText();
        	     Double euroVal = Double.parseDouble(str);
        	     Double usdVal = euroVal*1.14; //1 euro == 1.14 USD
        	     usd.setText(String.format ("%.2f", usdVal));
          }
       };
       dollarBtn.setOnAction(convertToUSD);
       
       EventHandler<ActionEvent> convertToEuro = new EventHandler<ActionEvent>() { 
           public void handle(ActionEvent e)  { 
         	     String str = usd.getText();
         	     Double usdVal = Double.parseDouble(str);
         	     Double euroVal = usdVal*0.87; //1 dollar == 0.87 euro
         	     euro.setText(String.format ("%.2f", euroVal));
           }
        };
        euroBtn.setOnAction(convertToEuro);
      
   } 
   public static void main(String args[]){ 
      launch(args); 
   } 

} 