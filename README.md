# 📚 Tareas de Programación Orientada a Objetos en C++

Este repositorio contiene ejercicios desarrollados en **C++** aplicando conceptos de **Programación Orientada a Objetos (POO)** y programación estructurada.

---

# 📂 Ejercicios del repositorio

## ✊📄✂️ Piedra, Papel o Tijera (POO)

Implementación del juego usando **clases y objetos**.

Conceptos utilizados:

* Clase `Jugador`
* Métodos `get` y `set`
* Encapsulamiento
* Comparación de jugadas

Ejemplo de la clase usada:

```cpp
class Jugador
{
private:
    short jugada;
public:
    int puntaje;

    short getJugada(){
        return jugada;
    }

    void setJugada(short newJugada){
        jugada = newJugada;
    }
};
```

---

## 🏦 Sistema de Gestión Bancaria (POO)

Simulación simple de cuentas bancarias utilizando **clases y métodos**.

Funcionalidades implementadas:

* Depositar dinero
* Retirar dinero
* Transferir entre cuentas
* Mostrar estado de la cuenta

Ejemplo de la clase principal:

```cpp
class CuentaBancaria{

private:
    int id;
    string nroCuenta;
    double saldo;

public:
    string propietario;

    CuentaBancaria(int i, string nro, string prop){
        id = i;
        nroCuenta = nro;
        propietario = prop;
        saldo = 0.0;
    }
};
```

---

## ✊📄✂️ Piedra, Papel o Tijera (Versión Lineal)

Versión del juego implementada sin clases, usando **programación estructurada**.

Conceptos utilizados:

* `switch`
* `if`
* Variables
* Comparación de resultados

Ejemplo del control de jugadas:

```cpp
if (jugador1 == jugador2)
    resultado = 0;
else if ((jugador1 == 1 && jugador2 == 3) ||
         (jugador1 == 2 && jugador2 == 1) ||
         (jugador1 == 3 && jugador2 == 2))
    resultado = 1;
else
    resultado = 2;
```

---

# 🛠 Tecnologías utilizadas

* Lenguaje: **C++**
* Paradigma: **Programación Orientada a Objetos**
* Compilador utilizado: **Zinjai / g++**

---

# 🎯 Objetivo del repositorio

Practicar conceptos fundamentales de programación como:

* Clases
* Objetos
* Métodos
* Encapsulamiento
* Lógica de programación
* Comparación de algoritmos (POO vs lineal)

---

👩‍💻 Proyecto realizado como práctica académica de **Programación Orientada a Objetos en C++**.
