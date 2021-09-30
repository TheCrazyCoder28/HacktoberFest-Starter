import javafx.application.Application;
import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.CheckBox;
import javafx.scene.control.RadioButton;
import javafx.scene.control.Toggle;
import javafx.scene.control.ToggleGroup;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.stage.Stage; 
import javafx.scene.shape.Circle;
import javafx.scene.shape.Ellipse;
import javafx.scene.shape.Rectangle;
import javafx.scene.shape.Shape; 
         
public class ShapeIt extends Application { 
	

	   boolean fill = true;
   @Override 
   public void start(Stage stage) { 
	   
      //Drawing a Circle  CenterX CenterY Radius
	  Circle circle = new Circle(300.0f,135.0f,100.0f); 
	  
	  
      //Creating a Group object  
      VBox root = new VBox(); 
      root.setPrefSize(600, 300);// prefWidth, prefHeight
      root.getChildren().add(circle);
      root.setAlignment(Pos.CENTER);
 
      
      ToggleGroup group = new ToggleGroup();
      
      RadioButton optCircle = new RadioButton("Cricle");  
      RadioButton optRect = new RadioButton("Rectangle");  
      RadioButton optEcllipse = new RadioButton("Ellipse");  
      
      optCircle.setToggleGroup(group); 
      optRect.setToggleGroup(group); 
      optEcllipse.setToggleGroup(group); 
      
      optCircle.setSelected(true);

      CheckBox isFilled = new CheckBox("Fill"); 
      isFilled.setSelected(true);

      HBox options = new HBox(10);
      options.getChildren().addAll(optCircle,optRect,optEcllipse,isFilled);
      options.setAlignment(Pos.CENTER);
      options.setPadding(new Insets(10, 10, 10, 10));

      // add a change listener 
      group.selectedToggleProperty().addListener((ChangeListener<? super Toggle>) new ChangeListener<Toggle>()  
      { 
          public void changed(ObservableValue<? extends Toggle> ob,  
                                                  Toggle o, Toggle n) 
          { 

              RadioButton rb = (RadioButton)group.getSelectedToggle(); 

              if (rb != null) { 
                  String s = rb.getText(); 
                  if(s.equals("Rectangle")) {
                	  //Rectangle double x, double y, double w, double h
                	  Rectangle rect = new Rectangle(200.0f, 70.0f, 300.0f, 200.0f);
                	  if(isFilled.isSelected()) {

                    	  rect.setFill(Color.BLACK); 
                	  }
                	  else {
                		  rect.setFill(Color.WHITE); 
                		  rect.setStrokeWidth(1);
                		  rect.setStroke(Color.BLACK);
                	  }
                	  root.getChildren().clear();
                	  root.getChildren().add(rect);
                  }
                  else if(s.equals("Ellipse")) {
                	  //Ellipse double x, double y, double w, double h
                      Ellipse ellipse = new Ellipse(200.0f, 120.0f, 150.0f, 80.f); 
                      if(isFilled.isSelected()) {

                    	  ellipse.setFill(Color.BLACK); 
                	  }
                	  else {
                		  ellipse.setFill(Color.WHITE); 
                		  ellipse.setStrokeWidth(1);
                		  ellipse.setStroke(Color.BLACK);
                	  }
                	  root.getChildren().clear();
                	  root.getChildren().add(ellipse);
                  }
                  else if(s.equals("Cricle")) {
                	  //Drawing a Circle  CenterX CenterY Radius
                	  Circle circle = new Circle(300.0f,135.0f,100.0f); 
                	  if(isFilled.isSelected()) {
                		  circle.setFill(Color.BLACK); 
                	  }
                	  else {
                		  circle.setFill(Color.WHITE); 
                		  circle.setStrokeWidth(1);
                		  circle.setStroke(Color.BLACK);
                	  }
                	  root.getChildren().clear();
                	  root.getChildren().add(circle);
                  }
                  
              } 
          } 
      }); 
      
      // create a event handler for chechbox
      EventHandler<ActionEvent> event = new EventHandler<ActionEvent>() { 

          public void handle(ActionEvent e) { 
    		  Shape shape = (Shape) root.getChildren().get(0);
        	  if(isFilled.isSelected()) {
        		  fill = true;
        		  shape.setFill(Color.BLACK);
        	  }
        	  else {
        		  fill = false;
        		  shape.setFill(Color.WHITE); 
        		  shape.setStrokeWidth(1);
        		  shape.setStroke(Color.BLACK);
        	  }
        	  root.getChildren().clear();
        	  root.getChildren().add(shape);
          } 

      }; 
      isFilled.setOnAction(event); 
      //Hboxellipse
      VBox main = new VBox();
      main.getChildren().addAll(root,options);
      
      //Creating a scene object 
      Scene scene = new Scene(main); 

      //Setting title to the Stage 
      stage.setTitle("Shape it!"); 
         
      //Adding scene to the stage 
      stage.setScene(scene); 
         
      //Displaying the contents of the stage 
      stage.show();
      
   } 
   public static void main(String args[]){ 
      launch(args); 
   } 
}   