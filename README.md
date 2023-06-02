#### Žodžių skaičiuoklė
Šioje saugykloje pateikiamas kodas, kuriame demonstruojamas std::string konteinerio ir asociatyviųjų konteinerių naudojimas C++ kalba. Šio projekto tikslas - ištirti asociatyvinių konteinerių galimybes atliekant tam tikras užduotis, pavyzdžiui, efektyvią paiešką ir elementų skaičiavimą.

Užduoties formuluotė
Pagrindinis šio projekto tikslas - atlikti toliau nurodytus uždavinius naudojant asociatyvinius konteinerius:

Suskaičiuoti kiekvieno žodžio pasikartojimų skaičių duotame tekste.
Sukurti kryžminių nuorodų lentelę, kurioje būtų nurodyta, kur tekste buvo paminėtas kiekvienas pasikartojantis žodis.
Rasti ir iš duoto teksto išskirti URL adresus.

#### Naudojimas
Norėdami naudoti šį kodą, vadovaukitės toliau pateiktais nurodymais:

Atlikite šiuos veiksmus: klonuokite saugyklą: `git clone <repository_url>`
Sukompiluokite ir sukurkite kodą naudodami C++ kompiliatorių: `g++ main.cpp -o main`
Paleiskite vykdomąjį failą: `./main`
Įgyvendinimo detalės
Kodą sudaro šie failai:

main.cpp: C.c.p.: yra pagrindinis uždavinių, aprašytų uždavinių formulavimo skyriuje, įgyvendinimas.
1 uždavinys: Žodžių pasikartojimų skaičiavimas
Pirmoji užduotis apima kiekvieno žodžio pasikartojimo tam tikrame tekste skaičiavimą. Tekstas gali būti gaunamas iš bet kokio tinkamo įvesties šaltinio, pavyzdžiui, Vikipedijos straipsnio. Įgyvendinant šią užduotį bus naudojami asociatyviniai konteineriai, kad būtų galima efektyviai saugoti ir skaičiuoti kiekvieno žodžio pasikartojimus.

2 užduotis: kryžminių nuorodų lentelė
Antroji užduotis - sukurti kryžminių nuorodų lentelę, kurioje būtų nurodyta eilutė (-ės), kurioje (-iose) tekste yra kiekvienas pasikartojantis žodis. Šioje lentelėje pateikiama nuoroda, pagal kurią galima lengvai rasti, kur buvo paminėtas kiekvienas žodis.

3 užduotis: URL adresų paieška
Trečioji užduotis apima URL adresų paiešką iš pateikto teksto. Įgyvendinant šią užduotį bus ieškoma pilno ir trumpojo URL adresų ir jie išvedami į ekraną arba į failą.

Reikalavimai
Šioje saugykloje esantis kodas atitinka visus reikalavimus, keliamus galutinėms ankstesnių darbų versijoms. Įsitikinkite, kad jūsų sistema atitinka šiuos reikalavimus:

#### C++ kompiliatorius, palaikantis C++11 arba naujesnę versiją.
Standartinė C++ biblioteka.
