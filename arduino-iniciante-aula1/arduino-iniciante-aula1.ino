/* 
  Arduino Iniciante Aula 01


  Autor -- Guilherme Soares Moreno
*/

// Anodo - Saida digital 
// Catodo - Saida GND

// --- Função de Configuração ---
void setup() 
{
  pinMode(8, OUTPUT); // configura digital 8 como saída
  pinMode(7, OUTPUT); // configura digital 7 como saída
  pinMode(5, INPUT_PULLUP); // configura digital 5 como entrada de pull up
  digitalWrite(8, HIGH); // 5V em digital 8
  digitalWrite(7, LOW);  // 0V em digital 7


} // end setup

// --- Loop Infinito --- 
void loop() 
{

  if(!digitalRead(5))
  {
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    delay(500); // atraso em ms. 500 ms = 0,5 segundos
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(500); // Atraso em ms, 500 ms
  } // end if

  else  // senão, o botão está solto
  {
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }


} // end loop
