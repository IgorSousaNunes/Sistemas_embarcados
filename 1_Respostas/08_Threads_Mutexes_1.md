1. Quais são as vantagens e desvantagens em utilizar:

(a) fork?
```
Com o uso de fork conseque-se criar processos que rodam de maneira idependente com espaços separados em memória, o que é postivo para que se evite que os processos alterem a mesma variável de modo indevido, mas pode ser desinteressante quando é necessária a comunicação constante entre os processos
```
(b) threads?
```
As Threeads permitem a paralelização de atiidades dentro de um mesmo processo, dessa forma, com o uso de variáveis globais, o compartilhamento de informações entre as atividades é mais eficiente
```
2. Quantas threads serão criadas após as linhas de código a seguir? Quantas coexistirão? Por quê?

(a)

```C
void* funcao_thread_1(void *arg);
void* funcao_thread_2(void *arg);

int main (int argc, char** argv)
{
	pthread_t t1, t2;
	pthread_create(&t1, NULL, funcao_thread_1, NULL);
	pthread_create(&t2, NULL, funcao_thread_2, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	return 0;
}
```

```
duas, uma para cada chamada da função thread_create()
```

(b)
```C
void* funcao_thread_1(void *arg);
void* funcao_thread_2(void *arg);

int main (int argc, char** argv)
{
	pthread_t t1, t2;
	pthread_create(&t1, NULL, funcao_thread_1, NULL);
	pthread_join(t1, NULL);
	pthread_create(&t2, NULL, funcao_thread_2, NULL);
	pthread_join(t2, NULL);
	return 0;
}
```
```
Uma por vez, a segunda será criada após a execução da primeira devido a função pthread_join(t1, NULL);
```

3. Apresente as características e utilidades das seguintes funções:

(a) `pthread_setcancelstate()`

(b) `pthread_setcanceltype()`

(DICA: elas são relacionadas à função pthread_cancel().)
