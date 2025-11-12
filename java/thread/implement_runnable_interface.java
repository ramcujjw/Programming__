package thread;

class SampleThread implements Runnable {
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("Thread count " + i + " | " + Thread.currentThread().getName());
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}