import java.io.FileInputStream;
import java.io.FileNotFoundException;
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;
public class Dice extends Application {
	@Override
	public void start(Stage primaryStage) throws Exception {
	      // Setting the image view 
	      ImageView imageView = new ImageView(new Image(new FileInputStream("src/images/0.jpg"))); 
	      // Setting the position of the image 
	      imageView.setX(0); 
	      imageView.setY(0); 
	      // Setting the fit height and width of the image view 
	      imageView.setFitHeight(300); 
	      imageView.setFitWidth(300); 
	      // Setting the preserve ratio of the image view 
	      imageView.setPreserveRatio(true);  	      
	      // Setting the image view2 
	      ImageView imageView1 = new ImageView(new Image(new FileInputStream("src/images/0.jpg"))); 
	      // Setting the position of the image 
	      imageView1.setX(0); 
	      imageView1.setY(0); 
	      // Setting the fit height and width of the image view 
	      imageView1.setFitHeight(300); 
	      imageView1.setFitWidth(300); 
	      // Setting the preserve ratio of the image view 
	      imageView1.setPreserveRatio(true);  
	      // Align images Horizontally with spacing 20 and padding 25
	      HBox images = new HBox(20);
	      images.setPadding(new Insets(25));
	      images.getChildren().addAll(imageView,imageView1);	      
	      Button play = new Button("Play");
	      play.setMinHeight(20);
	      play.setMinWidth(200);
	      // Align Images hbox with button in center 
	      VBox root = new VBox(10);
	      root.getChildren().addAll(images,play);
	      root.setAlignment(Pos.CENTER);
	      // Add everything to application
		  Scene scene=new Scene(root,670,400);  
		  primaryStage.setScene(scene);  
		  primaryStage.setTitle("Dice Game");  
		  primaryStage.show();  		  
		  EventHandler<ActionEvent> roll = new  EventHandler<ActionEvent>(){
			  @Override
		        public void handle(ActionEvent event) {
				  	//Create two random int in range 1-6
				  	int dice=(int)(Math.random()*6+1);
				    int dice1=(int)(Math.random()*6+1);
				    //image path
				    String imgpath = "src/images/Die" +dice+ ".jpg";
				    String imgpath1 = "src/images/Die" +dice1+ ".jpg";
				    //Set path to imageView
				    try {
						imageView.setImage(new Image(new FileInputStream(imgpath)));
					} catch (FileNotFoundException e) {
						e.printStackTrace();
					}
				    try {
						imageView1.setImage(new Image(new FileInputStream(imgpath1)));
					} catch (FileNotFoundException e) {
						e.printStackTrace();
					}
		        }
		  };
			play.setOnAction(roll);
		}
	public static void main(String[] args) {  
		launch(args);     
		}  
}
