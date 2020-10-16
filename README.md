# Hash-Generatorius

Ši programa yra hash generatorius, įvedus failo pavadinimą automatiškai sudaromas hashas. Yra galimybė neįrašius jokio failo, duomenis suvesti ranka

## Pseudo kodas

start  
skaitomas failas  
sudaromas pirmasis hashas  
hashas sudaromas keliant tam tikru laipsniu  
pakeičiama į hexą  
sudaromas antrasis hashas  
sudedami hashai  
atliekami patikrinimai jei reikalingi  
spausdinamas Hashas  
end  

## Analizė

![Screenshot](1-1-1.png)
![Screenshot](1-2.png)
![Screenshot](1-3.png)
![Screenshot](1-4.png)

Šiame punkte reikėjo išbandyti kaip skiriasi hashas jei failai skirsis vienu simboliu, kiek matome iš paskutinės nuotraukos, hashai yra visiškai skirtingi.

![Screenshot](3.png)

Čia paimtas yra normalus konstitucijos tekstas ir skaičiuojama per kiek laiko viskas yra suhashinima
![Screenshot](5.png)

Kaip matome porų, kurios būtų visiškai identiškos nėra
![Screenshot](6.png)

Čia buvo apskaičiuota kiek mažiausiai/daugiausia pasikartojimų randama, ir vidutinis procentas kiek vienodų simbolių būna

## Išvados

Stipriosios pusės:

  Šis hash generatorius nesudaro dvejų visiškai vienodų porų, kai skiriasi tik 1 ženklu. Gan mažas procentas kurie simboliai supranta apie 16%. Veikia palyginus greitai
  
 Silpnosios pusės:
 
 Pasitaiko kai visi simboliai sutampa(labai retai). Kai simbolių rinkinys yra labai mažas(1-2 simboliai) hashas tampa labai paprastas turi didelę galimybę sutapti.
  
