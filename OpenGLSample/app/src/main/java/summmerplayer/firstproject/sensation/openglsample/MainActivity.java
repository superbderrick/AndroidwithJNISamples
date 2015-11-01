package summmerplayer.firstproject.sensation.openglsample;

import android.opengl.GLSurfaceView;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    private GLSurfaceView mGLView;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        mGLView = new GLView(getApplicationContext());
        setContentView(mGLView);
    }

    static {
        System.loadLibrary("DrawFigure");
    }
}
