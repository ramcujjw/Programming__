package interfaceSample;

public class TextScanner {

    TextListener listener;

    public TextScanner(TextListener listener) {
        this.listener = listener;
    }

    void scan() {
        String text = "scanned text";
        listener.onText(text);
    }
}
