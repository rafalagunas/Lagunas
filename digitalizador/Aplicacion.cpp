using System;  
  
namespace digitalizador  
{  
   
    public class Applicacion  
    {  
        static void Main()  
        {  
            Documento factory = null;  
            Console.Write("Inserta documeento a leer ");  
            string car = Console.ReadLine();  
  
            switch (car.ToLower())  
            {  
                case "libro":  
                    factory = new Documento("Libro", "hola");  
                    break;  
                case "Articulo":  
                    factory = new Documento("Articulo", "Revista");  
                    break; 
                default:  
                    break;  
            }  
            Console.ReadKey();  
        }  
    }  
}   