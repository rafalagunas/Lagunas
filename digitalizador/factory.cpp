public static FactoriaServicios
{
  public static Servicio CrearServicio()
  {
    return new Servicio(“cadena conexión”, new Servicio2(), new Servicio3);
  }
}



