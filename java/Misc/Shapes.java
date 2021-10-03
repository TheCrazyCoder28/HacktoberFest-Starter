import javafx.application.Application; 
import javafx.scene.Group; 
import javafx.scene.Scene;
import javafx.scene.control.CheckBox;
import javafx.scene.control.RadioButton;
import javafx.scene.control.ToggleGroup;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage; 
import javafx.scene.shape.Circle; 
         
public class Shapes extends Application { 
   @Override 
   public void start(Stage stage) { 
	   
      //Drawing a Circle  CenterX CenterY Radius
	  Circle circle = new Circle(300,135,100); 

      //Creating a Group object  
      Group root = new Group(circle); 
         
      //Creating a scene object 
      Scene scene = new Scene(root, 600, 300);  
      
      HBox options = new HBox(10);
      ToggleGroup group = new ToggleGroup();  
      RadioButton optCircle = new RadioButton("Cricle");  
      RadioButton optRect = new RadioButton("Rectangle");  
      RadioButton optEcllipse = new RadioButton("Eclipse");  
      optCircle.setToggleGroup(group); 
      optRect.setToggleGroup(group); 
      optEcllipse.setToggleGroup(group); 

      CheckBox isFilled = new CheckBox("Fill"); 
      options.getChildren().addAll(optCircle,optRect,optEcllipse,isFilled);

      
      //Hbox
      VBox main = new VBox(10);
      main.getChildren().addAll(root,options);
      

      Scene MainScene = new Scene(main, 600, 300);  
      //Setting title to the Stage 
      stage.setTitle("Shape it!"); 
         
      //Adding scene to the stage 
      stage.setScene(MainScene); 
         
      //Displaying the contents of the stage 
      stage.show();
      
   } 
   public static void main(String args[]){ 
      launch(args); 
   } 
}   