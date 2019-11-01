public static FactoriaServicios
{
  public static Servicio CrearServicio()
  {
    return new Servicio(“cadena conexión”, new Servicio2(), new Servicio3);
  }
}



var InicializaHw = FactoriaServicios.CrearServicio();

var ConexionDB = FactoriaServicios.CrearServicio();

var  = FactoriaServicios.CrearServicio();

var servicioSecundario = FactoriaServicios.CrearServicio();

