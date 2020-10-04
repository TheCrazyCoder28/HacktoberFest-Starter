import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.HBox;
import javafx.stage.Stage;

public class Conversion extends Application{

    @Override
    public void start(Stage stage) throws Exception {
        //Euro Field
        Label lbl2 = new Label("European euro");
        TextField euro = new TextField();
        //Dollar Field
        Label lbl3 = new Label("U.S. dollar");
        TextField usd = new TextField();
        HBox hbox = new HBox();
        hbox.getChildren().addAll(lbl2,euro,lbl3,usd);

//        //Buttons
//        Button euroBtn = new Button("Euro");
//        Button dollarBtn = new Button("Dollar");
//        
        Scene scene = new Scene(hbox);
        stage.setTitle("Currency convertor");
        stage.setScene(scene);
        stage.show();
    }

}