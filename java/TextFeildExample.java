import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.TextField;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;
public class TextFeildExample extends Application {
	@Override
	public void start(Stage stage) throws Exception {		
		//TextField
		TextField tf = new TextField("Enter something");
		VBox root = new VBox(10);
		root.setPadding(new Insets(25));
		//Add text field to root 
        root.getChildren().addAll(tf);
        root.setAlignment(Pos.CENTER);
        //Add root to main scene
		Scene scene = new Scene(root);
		//Set title 		
		stage.setTitle("Title");
		stage.setScene(scene);
		stage.show();
	}
	public static void main(String[] args) {  
		launch(args);     
		}  
}

