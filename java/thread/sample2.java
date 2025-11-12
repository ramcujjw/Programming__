package thread;
public class sample2 {
    public static void main(String[] args) {
        SampleThread st = new SampleThread();
        Thread t = new Thread(st, "Thread-1");
        t.start();

        SampleThread st1 = new SampleThread();
        Thread t1 = new Thread(st1, "Thread-2");
        t1.start();

        SampleThread st2 = new SampleThread();
        Thread t2 = new Thread(st2, "Thread-3");
        t2.start();
    }
}