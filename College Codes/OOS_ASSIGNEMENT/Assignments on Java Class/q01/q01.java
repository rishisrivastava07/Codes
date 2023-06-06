/*
Name: Rishi Srivastava, Roll: 302211001002

Create a class “Room” which will hold the “height”, “width” and “breadth” of the room in three fields. This class also has a method “volume()” to calculate the volume of this room. Create another class “RoomDemo” which will use the earlier class, create instances of rooms, and display the volume of room.
*/

class Room{
	private int height;
	private int width;
	private int breadth;

	Room(int h, int w, int b){
		height = h;
		width = w;
		breadth = b;
	}

	Room (){
		height = 0;
		width = 0;
		breadth = 0;
	}

	public int volume(){
		return (height*breadth*width);
	}
}

class RoomDemo{
	public static void main(String args[]){
		Room r1 = new Room();
		Room r2 = new Room(10,20,30);

		System.out.println("Room 1 = " + r1.volume());
		System.out.println("Room 2 = " + r2.volume());
	}
}
