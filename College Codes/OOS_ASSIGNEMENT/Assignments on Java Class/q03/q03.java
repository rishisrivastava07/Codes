/*
Name: Rishi Srivastava, Roll: 302211001002

Write a class “Box” that with three member-variables “height”, “width” and “breadth”. Write
suitable constructors to initialize them. Add functions like “getVolume” and “getArea” that will
return volume and surface area respectively. Instantiate two arbitrary boxes and then print their
volume and surface area.
*/

class Box {
	private int height;
	private int width;
	private int breadth;
	
	Box(){
		height = 0;
		width = 0;
		breadth = 0;
	}
	
	Box(int h, int w, int b){
		height = h;
		width = w;
		breadth = b;
	}
	
	public long getVolume(){
		return (height * width * breadth);
	}
		
	public long getArea(){
		long temp_ans = ((height*width)+(width*breadth)+(breadth*height));
		return temp_ans;
	}
	
	public static void main(String args[]){
		Box cubiod = new Box(10,20,30);
		System.out.println("Volume = " + cubiod.getVolume());
		System.out.println("Total surface area = " + cubiod.getArea());
	}
}
