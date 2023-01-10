<h2 align='center'>
  Como utilizar a IDE do Arduino com o ESP32
</h2>
<h3>
  Visão geral 
</h3>
<p>
Voce irá aprender:
<ul>
    <li>Instalar o <a href="https://www.arduino.cc/en/software">Arduino IDE</a>.</li> 
    <li>Gravar o Firmware do ESP32 para o Arduino IDE.</li>  
	<li>Executar um código no ESP32 pelo Arduino IDE.</li>
</ul>
<h3 align='center'> 
Instalando o Arduino IDE
</h3>
<p>1. Para instalar é muito fácil, basta clicar <a href="https://www.arduino.cc/en/software">aqui</a>, você será redirecionado para a página de download do Arduino IDE, escolha seu sistema operacional e espere o arquivo ser baixado.</p>
<img src="Images\d.png" alt="Screen" width="700" height="350">
<p>2. Após ser baixado clique em cima deste arquivo e espere aparecer esta tela:</p>
<p align='center'><img src="Images\agreeed.png" alt="Screen" width="450" height="350"></p>
<p>3. Agora clique em Próximo e Instale:</p>
<p align='center'><img src="Images\agree.png" alt="Screen" width="450" height="350"></p>
<h3 align='center'> 
Instalando a placa do ESP32 no Arduino IDE
</h3>
<P>
1. Depois de instalado, abra o Arduino IDE. Vá para o canto superior esquerdo e clique em <code>File -> Preferences</code>.
</P>
<p align='center'><img src="Images\Prederences.png" alt="Screen" width="600" height="350"></p>
<P>2. Cole essa URL <code>https://dl.espressif.com/dl/package_esp32_index.json</code> no Boards Manager URLs e clique em OK.</P>
<p>3. Agora vá para aba de <code>Ferramentas -> Boards -> Boards Manager</code></p>
<p align='center'><img src="Images\AIDE.png" alt="Screen" width="700" height="500"></p>
<p>4. Pesquise por <code>esp32</code> e instale.</p>
<p align='center'><img src="Images\installesp.png" alt="Screen" width="807" height="448"></p>
<p>5. Agora selecione sua placa <code>Ferramentas -> boards</code>.</p>
<p align='center'><img src="Images\Selecionando.png" alt="Screen" width="1092" height="450"></p>
<h4 align="center"><img src="https://raw.githubusercontent.com/Tarikul-Islam-Anik/Animated-Fluent-Emojis/master/Emojis/Activities/Party%20Popper.png" height="30px">Pronto! Seu ESP32 esta apto à ser programado com o Arduino IDE <img src="https://raw.githubusercontent.com/Tarikul-Islam-Anik/Animated-Fluent-Emojis/master/Emojis/Activities/Party%20Popper.png" height="30px"> </h4>
<h3 align='center'> 
Fazendo um Led piscar
</h3>
<p>Agora que o Firmware do Arduino IDE foi instalado vamos executar um simples código para ver se está realmente funcionando.</p>
<p>1. Primeiro precisamos montar nosso circuito, para isso utilizaremos os pinos <code>D22</code> e <code>GND</code>.</p>
<p align='center'><img src="https://github.com/DreamkitteXz/Led-Blink-ESP32-JavaScript/raw/main/Images/circuit.png" alt="Screen" width="627" height="457"></p>
<p>2. Agora copie e cole o seguinte código no Arduino IDE:</p>
<pre><code>int Led = 22;

void setup() {
  pinMode(Led, OUTPUT); // Atribui o Led(pino 22) como saída.
}

void loop() {
  digitalWrite(pino, HIGH); // Acende o Led
  delay(500);
  digitalWrite(pino, LOW); // Apaga o Led
  delay(500);
}</code></pre>
<p>3. Clique na seta no canto superior esquerdo para carregar seu código no ESP32.</p>
<p align='center'><img src="Images\seta.png" alt="Screen" width="617" height="452"></p>
<h4 align="center"><img src="https://raw.githubusercontent.com/Tarikul-Islam-Anik/Animated-Fluent-Emojis/master/Emojis/Activities/Party%20Popper.png" height="30px">Pronto! Você pode conferir o resultado abaixo: <img src="https://raw.githubusercontent.com/Tarikul-Islam-Anik/Animated-Fluent-Emojis/master/Emojis/Activities/Party%20Popper.png" height="30px"> </h4>
<p align='center'><img src="Images\ezgif.com-gif-maker (5).gif" alt="Screen" width="600" height="338"></p>