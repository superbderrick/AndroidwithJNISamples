package summmerplayer.firstproject.sensation.openglsample;

import android.content.Context;
import android.opengl.GLSurfaceView;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

/**
 * Created by derrick on 15. 10. 29..
 */
public class GLView extends GLSurfaceView implements GLSurfaceView.Renderer {

    private static native void init();
    private static native void nativeCreated();
    private static native void nativeChanged(int w, int h);
    private static native void nativeUpdateGame();
    private static native void nativeOnTouchEvent(int x, int y, int touchFlag);

    public GLView(Context context) {
        super(context);
        this.setRenderer(this);
        this.requestFocus();
        this.setRenderMode(RENDERMODE_WHEN_DIRTY);
        this.setFocusableInTouchMode(true);

    }

    @Override
    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        nativeCreated();
    }

    @Override
    public void onSurfaceChanged(GL10 gl, int w, int h) {
        nativeChanged(w, h);
    }

    @Override
    public void onDrawFrame(GL10 gl) {
        nativeUpdateGame();
    }
}
