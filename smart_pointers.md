## Smart pointers

### Interfejs
```C
release()
// zwraca własność
// zwalnia wlasnosc smart, oznacza to ze znow musimy recznie zarzadzac pamiecia (i uzywac delete)
```
```C
reset()
// jesli nie podamy zadnego argumentu
// wskaznik staje sie null_pointerem 
```
```C
swap()
// zamienia 2 smartpointery ze soba
```
```C
get()
// daje goly wskaznik, ale w odroznieniu od releease
// on tylko zwraca taki wskaznik. SAM WSKAZNIK DALEJ JEST SMART
```
```C
operator bool()
// mozna uzyc warunku if na pointerze, jesli wskazuje nulla to zwroci false
```
```C
operator*()
// 
```
```C
operator->()
```
```C
make_shared<T>(args), make_unique<T>(args)
// tworzenie shared i unique pointera
```


asdasd asd asdasd