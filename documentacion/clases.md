# Clase

Digitalizador

# Atributos

Texto
tipoFormato
CantidadPaginas

# Funciones

scanCam(stream)
digitalizarUnico(texto, tipoFormato)
digitalizarCantidad(texto, tipoFormato, CantidadPaginas)

## digitalizar(string texto, string tipoFormato)

Argumentos: streaming de una cámara conectada a través de una ip.
Requerimientos: buena conexión y calidad de fotografía.
Valores de retorno: texto extraído de la página e imagen capturada.
Efecto: Se genera un archivo imagen y su resultante en .txt a través obtenido.

## digitalizar(string texto, string tipoFormato)

Argumentos: texto recolectado de la fotografía de la página, a través de OCR.
Requerimientos: imagen capturada a través de una cámara y escaneada con OCR.
Valores de retorno: página digitalizada.
Efecto: Se generan los formatos resultantes (.pdf, .epub, .mp3).

## digitalizar(string texto, string tipoFormato, CantidadPaginas)

Argumentos: texto recolectado de la fotografía de las páginas, a través de OCR.
Requerimientos: imágenes capturada a través de una cámara y escaneada con OCR.
Valores de retorno: página(s) digitalizada(s).
Efecto: Se generan los formatos resultantes (.pdf, .epub, .mp3).
