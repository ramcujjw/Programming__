package extend_thread_class;
public class Sample1 {

	    public static void main(String[] args) {
	        SampleThread st = new SampleThread();
	        st.start();
	        
	        SampleThread st1 = new SampleThread();
	        st1.start();
	        
	        SampleThread st2 = new SampleThread();
	        st2.start();
	        
}
}