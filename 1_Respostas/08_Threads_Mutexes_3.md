1. Apresente as características e utilidades das seguintes funções:

(a) `popen()`
```
Realiza a criação dos arquivos para comunicação via pipe entre dois processos
```
(b) `pclose()`
```
Fecha o arquivo que foi utilizado para comunicação via pipe entre dois processos
```

(c) `fileno()`
```
Retorna o descritor de arquivo desejado
```

2. Quais são as vantagens e desvantagens em utilizar:

(a) `popen()?`
```
É uma forma eficiente de se comunicar entre dois processos diferentes, mas devem ser tomados cuidados com relação a sincronia entre os momentos de leitura e escrita no pipe
```

(b) `exec()?`
```
É uma maneira de se executar um novo processo, mas encerrará o processo atual, dessa forma seu uso é bem conciliado com a criação anterior de um processo filho via fork()
```
