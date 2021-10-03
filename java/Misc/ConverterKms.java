import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class ConverterKms extends Application{

	@Override
	public void start(Stage stage) throws Exception {
		
		Label label = new Label("Enter distance in kilometers:");
		TextField input = new TextField();
		//Input 
		HBox hbox = new HBox(10);
		hbox.getChildren().addAll(label,input);
		
		//For output
		Label output = new Label();
		
		//button for listening 
		Button button = new Button("Convert to miles");
		VBox vButton = new VBox();
		vButton.getChildren().add(button);
		vButton.setAlignment(Pos.CENTER);
		//Add all to a root widget
		VBox root = new VBox(10);
		root.setPadding(new Insets(20));
		root.getChildren().addAll(hbox,output,vButton);
		
		Scene scene = new Scene(root);
		//Set title 		
		stage.setTitle("kilometer Converter");
		stage.setScene(scene);
		stage.show();
		//Create onclick function for converting 
		EventHandler<ActionEvent> convert = new  EventHandler<ActionEvent>(){
			  @Override
		        public void handle(ActionEvent event) {
				  String str = input.getText();
				  Double kms = Double.parseDouble(str);
				  Double miles = kms *0.6214;
				  output.setText(str+" kilometers is "+String.format("%.2f", miles)+" miles.");
			  }
			  
		};
		button.setOnAction(convert);
		
	}
			  
	public static void main(String[] args) {  
		launch(args);     
		}  

}
