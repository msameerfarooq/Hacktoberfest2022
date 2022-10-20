import java.util.*;

class Volume {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        float l, b, h, r, volume=0, cont;  

        while (true) {
            System.out.println("\n\nTo find the volume of figure:\nPress '1' for CUBE\nPress '2' for CUBOID\nPress '3' for SPHERE\nPress '4' for CYLINDER\nPress '5' for CONE\n");
            int ch = sc.nextInt();

            switch (ch) {
                case 1: System.out.print("Enter the value of side (l): ");
                        l = sc.nextFloat();
                
                        volume= l*l*l;
                
                        System.out.println("The volume of the cube is: "+volume);
                        break;
                        
                case 2: System.out.print("Enter the value of length of cuboid (l): ");
                        l = sc.nextFloat();
                        
                        System.out.print("Enter the value of breadth of cuboid (b): ");
                        b = sc.nextFloat();
                        
                        System.out.print("Enter the value of height of cuboid (h): ");
                        h = sc.nextFloat();
                        
                        volume = l*b*h;
                        
                        System.out.println("The volume of the cuboid is: "+volume);
                        break;
                        
                case 3: System.out.print("Enter the value of radius of sphere (r): ");
                        r = sc.nextFloat();  
                        
                        volume= (4*22*r*r*r)/(21);
                        
                        System.out.println("The volume of the sphere is: "+volume);
                        break;
                        
                case 4: System.out.print("Enter the value of radius of cylinder (r): ");
                        r = sc.nextFloat();  
                        
                        System.out.print("Enter the value of height of cylinder (h): ");
                        h = sc.nextFloat();
                        
                        volume= (22*r*r*h)/7;
                        
                        System.out.println("The volume of the cylinder is: "+volume);
                        break;
                        
                case 5: System.out.print("Enter the value of radius of cone (r): ");
                        r = sc.nextFloat(); 
                        
                        System.out.print("Enter the value of height of cone (h): ");
                        h = sc.nextFloat(); 
                        
                        volume= (22*r*r*h)/21;
                        
                        System.out.println("The volume of the cone is: "+volume);
                        break;
                        
                default:System.out.println("Invalid input\n");     
            }
            System.out.print("\nDo you wish to continue \nPress 1 for YES \nPress 0 for NO : ");
            cont = sc.nextInt();

            if (cont == 0) {
                break;
            }
        }
    }
}
