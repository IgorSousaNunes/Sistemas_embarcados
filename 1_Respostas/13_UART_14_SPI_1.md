1. Cite as vantagens e desvantagens das comunicação serial:

(a) Assíncrona (UART).
```
	- Vantagens:
		- Menor quantidade de fios é necessária
		- Não necessita de que se gere um clock
	- Desvantagens:
		- As tranferências não podem ser executadas com grandes frequências
		- Possui um protocolo com maior número de bits 
```

(b) SPI.
```
	- Vantagens:
		- Hardware simplificado
		- Permite maiores taxas de transmissão
		- Comunicação mais simples quando são necessários mais de dois componentes no sistema

	- Desvantagens:
		- Necessita de um clock de sincronização, aumentando a quantidade de fios necessários.
		-  Taxa fixa de transmissão, tendo que esperar clock para mandar informação.
```


2. Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, e que a comunicação entre os dois é UART. É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?
```
	A comunicação pode ocorrer a qualquer hora uma vez que o protocolo UART é assíncrono e possui é full-duplex
```


3. Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, que a comunicação entre os dois seja SPI, e que o MSP430 seja o escravo. É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?
```
	O MSP poderá enviar os resultados apenas quando solicitado, já que depende do sinal de clock gerado pela Raspberry
```


4. Se o Raspberry Pi tiver de se comunicar com dois dispositivos via UART, como executar a comunicação com o segundo dispositivo?
```
	Cada um dos dispositivos saberá qual informação lhe é pertinente quando receber anteriormente uma sequência de bits informando que a próxima sequência é direcionada ao seu endereço  
```


5. Se o Raspberry Pi tiver de se comunicar com dois dispositivos via SPI, como executar a comunicação com o segundo dispositivo?
```
	Existem duas possíveis maneiras. A primeira delas é cascatear os aparelhos em uma cadeia de forma que o dados passam pelos dois escravos e pelo mestre. A segunda é utilizando um caminho de dados extra que indicará a qual escravo os dados transmitidos é direcionado
```

