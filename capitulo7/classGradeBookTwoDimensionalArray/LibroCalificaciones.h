/*Arreglo Bidimensional (n*m) filas por columnas */
#include <string>
#include <array>
#include <iomanip>
#include <iostream>
class LibroCalificaciones{
    public:
    //constante - #de estudiantes que tomaron la prueba
    static const size_t estudiantes{10}; //#de estudiantes
    static const size_t pruebas{3}; //#de pruebas
    
    //el constructor inicializa el nombre del curso y el arreglo de calificaciones
    LibroCalificaciones(const std::string& nombre, 
        std::array<std::array<int, pruebas>, estudiantes>& arreglosCalificaciones)
        : nombreCurso(nombre), calificaciones(arreglosCalificaciones){
        }
    
    void setNombreCurso(const std::string& nombre){ //establece nombre del curso
        nombreCurso = nombre;
    }

   const std::string& getNombreCurso() const {
        return nombreCurso; // Almacena el nombre del curso
    }

    //Muestra el mensaje de bienvenida para el usuario
    void displayMensaje()const{
    //llama a obtenerNombreCurso para obtener el nombre del curso 
    // que representa este LibroCalificaciones
    std::cout<< "Bienvenido al Libro de Calificaciones para\n"
    <<getNombreCurso()<< "!" << std::endl;
    }
    
    //Realiza varias operaciones con los datos
    void processCalificaciones()const{
    imprimirCalificaciones();//imprime el arreglo Calificaciones

    //llama a las funciones obtenerMinimo y Maximo
    std::cout << "La calificacion mas baja es " <<getMinimo()
    << "\nLa calificacion mas alta es " << getMaximo() <<std::endl;

    //llama a la funcion imprimirGraficosBarras para imprimir el
    //de distribucion de calificaciones
    imprimirGraficoBarras();
}

    //busca la calificacion mas minima
    int getMinimo() const{
        int calificacionInf{100}; //asume que la calificacion +alta es 100
        //itera a traves del arreglo de calificaciones
        for(auto const& estudiante : calificaciones){
            for(auto const& calificacion : estudiante){
                if(calificacion < calificacionInf){//nueva calificaciones +baja
                    calificacionInf = calificacion;
            }
        }
    }
        return calificacionInf;//devuelve calificacion +baja
}

    //busca la calificacion maxima
    int getMaximo() const{
        int calificacionSup{0};//asume q' la califcacion +alta=0
        //itera a traves del arreglo calificaciones
        for(auto const& estudiante : calificaciones){
            for(auto const& calificacion : estudiante){
                if(calificacion > calificacionSup){//nueva calificaciones +baja
                    calificacionSup = calificacion;
            }
        }
    }
        return calificacionSup;//devuelve la calificacion +alta
    }

    //determina la califcacion promedio para la prueba
    double getPromedio(const std::array<int, pruebas>& setCalificaciones) const{
        int total{0};//inicializa el total

        //suma las calificaciones en el arreglo
        for(int calificacion : setCalificaciones){
        total+=calificacion;
        }

        //devuelve el promedio de las calificaciones
        return static_cast<double>(total) / setCalificaciones.size();
    }
    void imprimirGraficoBarras() const{
        std::cout<<"\nDistribucion de calificaciones"<<std::endl;
        //almacena la frecuencia de calificaciones en cada rango de
        //10 calificaciones
        const size_t tamanioFrecuencia{11};
        std::array<unsigned int, tamanioFrecuencia>frecuencia{};
        //inicializa elementos con 0

        //para cada calificacion, incrementa la frecuencia apropiada
        for(auto const& estudiante : calificaciones){
            for (auto const& prueba : estudiante){
            ++frecuencia[prueba / 10];
            }
        }

        //para cada frecuencia de calificacion, imprime barra en el grafico
        for(size_t cuenta{0}; cuenta < tamanioFrecuencia; ++cuenta)
        {
            //imprime etiquetas de las barras("0-9"...)
            if(0 == cuenta){
                std::cout<< "0-9: ";
                }
            else if(10 == cuenta){
                std::cout << " 100: ";
                }
            else{
                std::cout << cuenta*10<<"-"<<(cuenta*10) + 9 << ": ";
                }

            //imprime barra de asteriscos
            for(unsigned int estrellas{0}; estrellas<frecuencia[cuenta];
            ++estrellas)
                std::cout << '*';
                
            std::cout << std::endl;

        }
    }

    //imprime el contenido del arreglo calificaciones
    void imprimirCalificaciones()const{
        std::cout<<"\nLas calificaciones son:\n\n";
        std::cout <<"              ";
        
        //crea un encabezado de columna para cada una de las pruebas
        for(size_t prueba{0}; prueba < pruebas; ++prueba){
            std::cout << "Prueba " << prueba + 1 << " ";
        }

        std::cout << "Promedio" << std::endl; //encabezado de la columna promedio de estudiantes

        for (size_t estudiante{0}; estudiante < calificaciones.size(); ++estudiante){
            std::cout << "Estudiante " << std::setw(2) << estudiante + 1;
        

        //imprime la calificacion de cada estudiante
        for(size_t prueba{0}; prueba < calificaciones [estudiante].size(); ++prueba){
            std::cout << std::setw(8) << calificaciones[estudiante][prueba];
            }

        double promedio{getPromedio(calificaciones[estudiante])};
        std::cout << std::setw(9) << std::setprecision(2) << std::fixed
            << promedio << std::endl;
        }
    }   
private:
    std::string nombreCurso;
    std::array<std::array<int, pruebas>, estudiantes> calificaciones;    
};