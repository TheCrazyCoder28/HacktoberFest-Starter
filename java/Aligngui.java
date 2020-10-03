import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.CheckBox;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;
public class Aligngui extends Application {
	@Override
	public void start(Stage stage) throws Exception {
		//First 2 CheckBox
		CheckBox c1 = new CheckBox("Snap to Grid"); 
		CheckBox c2 = new CheckBox("Show Grid   "); 
		VBox vbox = new VBox(5);
		vbox.setPadding(new Insets(1));
		vbox.getChildren().addAll(c1,c2);
		vbox.setAlignment(Pos.CENTER);
		//Second input fields
		Label label1 = new Label("x:");
		TextField textField1 = new TextField("0");
		textField1.setPrefWidth(50);
		HBox hb1 = new HBox();
		hb1.getChildren().addAll(label1, textField1);
		hb1.setSpacing(10);
		Label label2 = new Label("Y:");
		TextField textField2 = new TextField("0");
		textField2.setPrefWidth(50);
		HBox hb2 = new HBox();
		hb2.getChildren().addAll(label2, textField2);
		hb2.setSpacing(10);
		//Vertically align text boxes
		VBox vbox2 = new VBox(20);
		vbox2.setPadding(new Insets(1));
		vbox2.getChildren().addAll(hb1,hb2);
		vbox2.setAlignment(Pos.CENTER);
		//3 Buttons
		Button button1 = new Button("Ok"); 
	    Button button2 = new Button("Cancel");
	    Button button3 = new Button("Help"); 
	    button1.setMaxWidth(Double.MAX_VALUE);
	    button2.setMaxWidth(Double.MAX_VALUE);
	    button3.setMaxWidth(Double.MAX_VALUE);
		VBox vbox3 = new VBox(5);
		vbox3.setPadding(new Insets(10));
		vbox3.getChildren().addAll(button1,button2,button3);
		//Add 3 verticalBoxes to main HBox 
		HBox main = new HBox(5);
		main.setSpacing(10);
		main.setPadding(new Insets(10));
		main.getChildren().addAll(vbox, vbox2,vbox3);
		Scene scene = new Scene(main);
		//Setting title to the Stage 
		stage.setTitle("Align"); 
		//Adding scene to the stage 
		stage.setScene(scene); 
		//Displaying the contents of the stage 
		stage.show(); 
	} 
   public static void main(String args[]){ 
	      launch(args); 
	   } 
}	