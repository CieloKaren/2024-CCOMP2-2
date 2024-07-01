@echo off
cls
echo Compilando el programa...
g++ -o main main.cpp Persona.cpp
if %errorlevel% neq 0 (
    echo Error: Fallo en la compilación.
    pause
    exit /b
)

echo Ejecutando el programa...
main.exe
