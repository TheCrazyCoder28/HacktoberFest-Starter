import javafx.application.Application;
import javafx.concurrent.Service;
import javafx.concurrent.Task;
import javafx.event.ActionEvent;
import javafx.event.Event;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.ProgressBar;
import javafx.scene.control.ProgressIndicator;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class Progress extends Application { 
	  
    static double ii = 0; 
  
    // launch the application 
    public void start(Stage stage) throws Exception   { 
       
    	Service<Integer> service = new MyService();
        // create a progressbar 
        VBox root = new VBox();  
        root.setPadding(new Insets(20));
        
        ProgressIndicator progressIndicator = new ProgressIndicator();
        
        ProgressBar progress = new ProgressBar();  
        progress.setPrefWidth(Double.MAX_VALUE);
  

        progress.progressProperty().bind(service.progressProperty());
        progressIndicator.progressProperty().bind(service.progressProperty());
        service.start();
        
        // action event 
        EventHandler<ActionEvent> event = new EventHandler<ActionEvent>() { 
            public void handle(ActionEvent e) 
            { 
                // set progress to different level of progressbar 
                ii += 0.01; 
                progress.setProgress(ii); 
            } 
  
        }; 
        Button b = new Button("Close"); 
        // set on action 
        b.setOnAction(event); 
        


        // add progress and button 

        root.getChildren().addAll(progressIndicator,progress);
        root.setAlignment(Pos.CENTER);
        // create a scene 
        Scene sc = new Scene(root, 400, 200); 
  
        // set title for the stage 
    	stage.setTitle("creating progressbar"); 
        // set the scene 
        stage.setScene(sc); 
        stage.show(); 
    } 
  
    public static void main(String args[]) 
    { 
        // launch the application 
        launch(args); 
    } 
    class MyService extends Service<Integer> {

        @Override
        protected Task<Integer> createTask() {
            return new Task<Integer>() {

                @Override
                protected Integer call() throws Exception {
                    int iterations;
                    for (iterations = 0; iterations < 100000000; iterations++) {
                        if (isCancelled()) {
                            updateMessage("Cancelled");
                            break;
                        }
                        updateMessage("Iteration " + iterations);
                        updateProgress(iterations, 100000000);
                    }
                    return iterations;
                }
            };
        }
    }
} 