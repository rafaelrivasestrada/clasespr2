template <class T> void intercambiar(T& a, T& b)
{
    T aux;
    aux = a;
    a = b;
    b = aux;

    return;
}