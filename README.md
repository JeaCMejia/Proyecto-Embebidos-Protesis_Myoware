# Proyecto-Embebidos-Protesis_Myoware
Autores:
Hernán Campos
Jean Mejia

Objetivo General

Realizar el control de una prótesis activa detectando las señales electromiográficas en una zona específica del antebrazo (cercana al codo) con un sensor Myoware, de modo que, en ella se repliquen determinados movimientos de la mano.

Objetivos Específicos

•	Emplear una placa ESP32 – Adafruit HUZZAH32 que se conecte al sensor Myoware a fin de obtener las señales de movimientos específicos en la mano mediante lectura analógica para que puedan ser recopiladas y procesadas.

•	Registrar datos mediante comunicación serial usando el programa CoolTerm de modo que se tenga una gran cantidad de archivos “.csv” con las tareas realizadas por la mano que conformaran el DataSet a procesar.

•	Usar un script de Matlab que permita determinar cuáles tareas son clasificables para que solo esas sean utilizadas en el entrenamiento de una Inteligencia Artificial mediante codificación en Python a fin de cargar los movimientos que realizará la prótesis en la placa ESP32 cuando se lea la señal electromiográfica determinada.

•	Controlar los servomotores de la prótesis activa por medio de una placa Arduino que se comunica por puerto serial al ESP32 de tal forma que recepte aquel mensaje del movimiento realizado y lo replique en la prótesis.
