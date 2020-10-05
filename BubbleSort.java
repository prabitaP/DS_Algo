import java.util.*;
import java.io.*;
class BubbleSort
{
public static void main(String args[])throws IOException
{
     int arr[]=new int[7];
     InputStreamReader ir=new InputStreamReader(System.in);
     BufferedReader br=new BufferedReader(ir);
        System.out.println("enter the values:");
     for(int i=0;i<arr.length;i++)
     {
          arr[i]=Integer.parseInt(br.readLine());
     }
      boolean swap=false;
      
      for(int i=0;i<arr.length;i++)
      {
	   int temp=0;
         for(int j=0;j<arr.length-i-1;j++)
          {
	        if(arr[j]>arr[j+1])
	         {   
	            temp=arr[j];
	            arr[j]=arr[j+1];
	            arr[j+1]=temp;   
	            swap=true;
	        }
          }
      
	if(swap==false)
	break;
        }
   System.out.println("the values after sorting are:");
      for(int i=0;i<arr.length;i++)
      {
          System.out.println(arr[i]);
      }
}
}

