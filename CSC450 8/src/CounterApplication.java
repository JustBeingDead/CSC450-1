public class CounterApplication {

    public static void main(String[] args) {
        // Create and start the first thread to count up to 20
        Thread countUpThread = new Thread(new CountUpTask());
        countUpThread.start();

        // Wait for the first thread to finish counting up to 20
        try {
            countUpThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // Create and start the second thread to count down to 0
        Thread countDownThread = new Thread(new CountDownTask());
        countDownThread.start();
    }

    // Task to count up to 20
    static class CountUpTask implements Runnable {
        @Override
        public void run() {
            for (int i = 1; i <= 20; i++) {
                System.out.println("Counting up: " + i);
                try {
                    Thread.sleep(100); // Simulate some processing time
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    // Task to count down to 0
    static class CountDownTask implements Runnable {
        @Override
        public void run() {
            for (int i = 20; i >= 0; i--) {
                System.out.println("Counting down: " + i);
                try {
                    Thread.sleep(100); // Simulate some processing time
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
