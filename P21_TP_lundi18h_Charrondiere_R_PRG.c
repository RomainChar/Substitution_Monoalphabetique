#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Charrondiere Romain
    //Sujet Q1

    //Variables

    int numiter;
    int TailleTexte;
    char lettre;
    char alphabet[26];
    char alphabet2[26];
    char alphabetmax[26];
    int i;
    int i2;
    int ite;
    int L1;
    int L2;
    int NBiter;
    float q;
    float qualite2;
    float qualite;
    float r;
    char Texte[10000];
    int Texteind[10000];
    char Textedechiffre[10000];
    long int u;
    int convertir_lettre_en_indice(char letter) {
        if (letter >= 'A' && letter <= 'Z')
            return letter - 'A';
    else
        printf("Bad letter");
    }
    float proba_paire(char l1, char l2) {
    if ((l1 == ' ') || (l2 == ' '))
        return 1;
    else if (l1 == l2)
        return 1;
    else if ((l1 == 'E') && (l2 == 'S'))
         return 0.17745477852586555;
    else if ((l1 == 'L') && (l2 == 'E'))
         return 0.3958669626945685;
    else if ((l1 == 'E') && (l2 == 'N'))
         return 0.12631328583221088;
    else if ((l1 == 'R') && (l2 == 'E'))
         return 0.3213604320179466;
    else if ((l1 == 'D') && (l2 == 'E'))
         return 0.528495558419197;
    else if ((l1 == 'N') && (l2 == 'T'))
         return 0.24150677794025918;
    else if ((l1 == 'T') && (l2 == 'E'))
         return 0.22266790802033928;
    else if ((l1 == 'A') && (l2 == 'I'))
         return 0.19701669532532914;
    else if ((l1 == 'E') && (l2 == 'T'))
         return 0.0899769015089708;
    else if ((l1 == 'E') && (l2 == 'R'))
         return 0.0877455906157398;
    else if ((l1 == 'O') && (l2 == 'N'))
         return 0.2750910631584594;
    else if ((l1 == 'O') && (l2 == 'U'))
         return 0.26992124059457223;
    else if ((l1 == 'S') && (l2 == 'E'))
         return 0.1742354852483254;
    else if ((l1 == 'I') && (l2 == 'T'))
         return 0.17903011673496147;
    else if ((l1 == 'E') && (l2 == 'L'))
         return 0.07511879677307058;
    else if ((l1 == 'A') && (l2 == 'N'))
         return 0.15180660975484636;
    else if ((l1 == 'L') && (l2 == 'A'))
         return 0.21302336704584002;
    else if ((l1 == 'Q') && (l2 == 'U'))
         return 0.9927786795570235;
    else if ((l1 == 'N') && (l2 == 'E'))
         return 0.1566053665309972;
    else if ((l1 == 'U') && (l2 == 'R'))
         return 0.16468922525325308;
    else if ((l1 == 'M') && (l2 == 'E'))
         return 0.3634684253413376;
    else if ((l1 == 'I') && (l2 == 'E'))
         return 0.13658190098209483;
    else if ((l1 == 'I') && (l2 == 'S'))
         return 0.1319600247698044;
    else if ((l1 == 'E') && (l2 == 'M'))
         return 0.05387053233902408;
    else if ((l1 == 'E') && (l2 == 'C'))
         return 0.05308268946242293;
    else if ((l1 == 'E') && (l2 == 'D'))
         return 0.052314515340022655;
    else if ((l1 == 'U') && (l2 == 'E'))
         return 0.13993572985895913;
    else if ((l1 == 'E') && (l2 == 'U'))
         return 0.050679823324217776;
    else if ((l1 == 'C') && (l2 == 'E'))
         return 0.2773295972711921;
    else if ((l1 == 'I') && (l2 == 'L'))
         return 0.11832185067093948;
    else if ((l1 == 'I') && (l2 == 'N'))
         return 0.11664648553099506;
    else if ((l1 == 'T') && (l2 == 'A'))
         return 0.11799393629523262;
    else if ((l1 == 'S') && (l2 == 'A'))
         return 0.10311729321228141;
    else if ((l1 == 'N') && (l2 == 'S'))
         return 0.11553845882132732;
    else if ((l1 == 'R') && (l2 == 'A'))
         return 0.12054951144606106;
    else if ((l1 == 'A') && (l2 == 'R'))
         return 0.09536890410934439;
    else if ((l1 == 'S') && (l2 == 'S'))
         return 0.08959865050488831;
    else if ((l1 == 'U') && (l2 == 'S'))
         return 0.1122172357081955;
    else if ((l1 == 'E') && (l2 == 'P'))
         return 0.041108242634082255;
    else if ((l1 == 'C') && (l2 == 'O'))
         return 0.2227420018193613;
    else if ((l1 == 'U') && (l2 == 'I'))
         return 0.10913905769231261;
    else if ((l1 == 'T') && (l2 == 'R'))
         return 0.09553870260380509;
    else if ((l1 == 'T') && (l2 == 'I'))
         return 0.09420170556732535;
    else if ((l1 == 'E') && (l2 == 'E'))
         return 0.03878951505551412;
    else if ((l1 == 'U') && (l2 == 'N'))
         return 0.10560667343799511;
    else if ((l1 == 'N') && (l2 == 'D'))
         return 0.09107846147548657;
    else if ((l1 == 'A') && (l2 == 'U'))
         return 0.07884631462504918;
    else if ((l1 == 'P') && (l2 == 'A'))
         return 0.22435492682034852;
    else if ((l1 == 'S') && (l2 == 'I'))
         return 0.07260405217820523;
    else if ((l1 == 'S') && (l2 == 'D'))
         return 0.07250950805289882;
    else if ((l1 == 'L') && (l2 == 'L'))
         return 0.10262023961227663;
    else if ((l1 == 'S') && (l2 == 'O'))
         return 0.07042837008473427;
    else if ((l1 == 'R') && (l2 == 'I'))
         return 0.08421209283466707;
    else if ((l1 == 'S') && (l2 == 'T'))
         return 0.06817565203730994;
    else if ((l1 == 'V') && (l2 == 'E'))
         return 0.3349022231037596;
    else if ((l1 == 'M') && (l2 == 'A'))
         return 0.18685388259307167;
    else if ((l1 == 'O') && (l2 == 'I'))
         return 0.10125150575175924;
    else if ((l1 == 'E') && (l2 == 'A'))
         return 0.029392767736052913;
    else if ((l1 == 'U') && (l2 == 'T'))
         return 0.07855385203667495;
    else if ((l1 == 'A') && (l2 == 'L'))
         return 0.06061236118372685;
    else if ((l1 == 'I') && (l2 == 'R'))
         return 0.06752930272378022;
    else if ((l1 == 'P') && (l2 == 'E'))
         return 0.17394140633016555;
    else if ((l1 == 'O') && (l2 == 'R'))
         return 0.09208510263987572;
    else if ((l1 == 'A') && (l2 == 'S'))
         return 0.059607459459641444;
    else if ((l1 == 'R') && (l2 == 'O'))
         return 0.07268771522111453;
    else if ((l1 == 'N') && (l2 == 'C'))
         return 0.06716691251530542;
    else if ((l1 == 'T') && (l2 == 'D'))
         return 0.06425876209482523;
    else if ((l1 == 'C') && (l2 == 'H'))
         return 0.14469422748454122;
    else if ((l1 == 'P') && (l2 == 'O'))
         return 0.16247900663871787;
    else if ((l1 == 'D') && (l2 == 'A'))
         return 0.12181786960593638;
    else if ((l1 == 'A') && (l2 == 'V'))
         return 0.05498631046396331;
    else if ((l1 == 'S') && (l2 == 'L'))
         return 0.05400803977843085;
    else if ((l1 == 'S') && (l2 == 'P'))
         return 0.05390649238458323;
    else if ((l1 == 'N') && (l2 == 'A'))
         return 0.06034400108981258;
    else if ((l1 == 'A') && (l2 == 'T'))
         return 0.052519521544978715;
    else if ((l1 == 'P') && (l2 == 'R'))
         return 0.14780998536396112;
    else if ((l1 == 'D') && (l2 == 'I'))
         return 0.11087504659181996;
    else if ((l1 == 'T') && (l2 == 'O'))
         return 0.056910542162046794;
    else if ((l1 == 'T') && (l2 == 'L'))
         return 0.05680921463073878;
    else if ((l1 == 'R') && (l2 == 'S'))
         return 0.061425190240201655;
    else if ((l1 == 'T') && (l2 == 'S'))
         return 0.05426155098642304;
    else if ((l1 == 'E') && (l2 == 'V'))
         return 0.022306006326626125;
    else if ((l1 == 'O') && (l2 == 'M'))
         return 0.07283817533624282;
    else if ((l1 == 'A') && (l2 == 'C'))
         return 0.04618001391669978;
    else if ((l1 == 'L') && (l2 == 'I'))
         return 0.06606354296532718;
    else if ((l1 == 'V') && (l2 == 'A'))
         return 0.22237790329777565;
    else if ((l1 == 'A') && (l2 == 'P'))
         return 0.04453043626057351;
    else if ((l1 == 'S') && (l2 == 'C'))
         return 0.044565299362025204;
    else if ((l1 == 'S') && (l2 == 'U'))
         return 0.04455829609348399;
    else if ((l1 == 'L') && (l2 == 'U'))
         return 0.06280912366395668;
    else if ((l1 == 'D') && (l2 == 'U'))
         return 0.09509506787383788;
    else if ((l1 == 'R') && (l2 == 'T'))
         return 0.052960052673554414;
    else if ((l1 == 'M') && (l2 == 'O'))
         return 0.11975359830132656;
    else if ((l1 == 'R') && (l2 == 'D'))
         return 0.05141898554047817;
    else if ((l1 == 'V') && (l2 == 'O'))
         return 0.20398979687424718;
    else if ((l1 == 'N') && (l2 == 'O'))
         return 0.04678224696947546;
    else if ((l1 == 'H') && (l2 == 'E'))
         return 0.3861582774329536;
    else if ((l1 == 'G') && (l2 == 'E'))
         return 0.3327148436558766;
    else if ((l1 == 'T') && (l2 == 'T'))
         return 0.044503841315657974;
    else if ((l1 == 'I') && (l2 == 'O'))
         return 0.0426457762658779;
    else if ((l1 == 'P') && (l2 == 'L'))
         return 0.11006346844043718;
    else if ((l1 == 'R') && (l2 == 'L'))
         return 0.04578986938307616;
    else if ((l1 == 'E') && (l2 == 'Q'))
         return 0.017153339080283974;
    else if ((l1 == 'T') && (l2 == 'P'))
         return 0.04085868207249961;
    else if ((l1 == 'E') && (l2 == 'F'))
         return 0.016849566098737348;
    else if ((l1 == 'A') && (l2 == 'M'))
         return 0.0357288028303591;
    else if ((l1 == 'L') && (l2 == 'O'))
         return 0.05112727788027886;
    else if ((l1 == 'V') && (l2 == 'I'))
         return 0.16590428596426732;
    else if ((l1 == 'E') && (l2 == 'I'))
         return 0.01523235741999991;
    else if ((l1 == 'U') && (l2 == 'X'))
         return 0.041232991245169694;
    else if ((l1 == 'T') && (l2 == 'U'))
         return 0.03608970839119784;
    else if ((l1 == 'S') && (l2 == 'Q'))
         return 0.03147619045849333;
    else if ((l1 == 'N') && (l2 == 'I'))
         return 0.03563313197632218;
    else if ((l1 == 'N') && (l2 == 'N'))
         return 0.035452984696360997;
    else if ((l1 == 'M') && (l2 == 'I'))
         return 0.0878007666873385;
    else if ((l1 == 'M') && (l2 == 'M'))
         return 0.0852649327652172;
    else if ((l1 == 'C') && (l2 == 'A'))
         return 0.07691669088391741;
    else if ((l1 == 'F') && (l2 == 'A'))
         return 0.21593796932045625;
    else if ((l1 == 'U') && (l2 == 'L'))
         return 0.036927711785122545;
    else if ((l1 == 'H') && (l2 == 'A'))
         return 0.2747941960926197;
    else if ((l1 == 'U') && (l2 == 'V'))
         return 0.03537000776740918;
    else if ((l1 == 'A') && (l2 == 'B'))
         return 0.027337523700467267;
    else if ((l1 == 'D') && (l2 == 'O'))
         return 0.05956400683475276;
    else if ((l1 == 'B') && (l2 == 'L'))
         return 0.22780113986412867;
    else if ((l1 == 'R') && (l2 == 'C'))
         return 0.031691322992918054;
    else if ((l1 == 'M') && (l2 == 'P'))
         return 0.07317834053327871;
    else if ((l1 == 'S') && (l2 == 'M'))
         return 0.025662310357860877;
    else if ((l1 == 'J') && (l2 == 'E'))
         return 0.45491271528544724;
    else if ((l1 == 'T') && (l2 == 'C'))
         return 0.02826774935100532;
    else if ((l1 == 'A') && (l2 == 'G'))
         return 0.024854413871810754;
    else if ((l1 == 'I') && (l2 == 'M'))
         return 0.02752719805964549;
    else if ((l1 == 'A') && (l2 == 'D'))
         return 0.023991737217723515;
    else if ((l1 == 'E') && (l2 == 'G'))
         return 0.010843493461791184;
    else if ((l1 == 'F') && (l2 == 'O'))
         return 0.1672278605073327;
    else if ((l1 == 'I') && (l2 == 'D'))
         return 0.025586685915396434;
    else if ((l1 == 'R') && (l2 == 'R'))
         return 0.028138426343495285;
    else if ((l1 == 'C') && (l2 == 'I'))
         return 0.059024458801905016;
    else if ((l1 == 'I') && (l2 == 'V'))
         return 0.024594984129688448;
    else if ((l1 == 'I') && (l2 == 'C'))
         return 0.024331136865601;
    else if ((l1 == 'N') && (l2 == 'G'))
         return 0.02444665310288066;
    else if ((l1 == 'R') && (l2 == 'M'))
         return 0.02587476041542971;
    else if ((l1 == 'F') && (l2 == 'I'))
         return 0.14933694802267972;
    else if ((l1 == 'U') && (l2 == 'A'))
         return 0.026047610873637064;
    else if ((l1 == 'U') && (l2 == 'C'))
         return 0.02586146077591798;
    else if ((l1 == 'U') && (l2 == 'P'))
         return 0.025818273953247144;
    else if ((l1 == 'O') && (l2 == 'L'))
         return 0.030743619388796592;
    else if ((l1 == 'G') && (l2 == 'R'))
         return 0.16692552889729892;
    else if ((l1 == 'O') && (l2 == 'T'))
         return 0.030630253979285666;
    else if ((l1 == 'R') && (l2 == 'U'))
         return 0.024129076197831733;
    else if ((l1 == 'E') && (l2 == 'B'))
         return 0.009209347800269675;
    else if ((l1 == 'U') && (l2 == 'D'))
         return 0.024256102333188527;
    else if ((l1 == 'O') && (l2 == 'S'))
         return 0.029109717931083554;
    else if ((l1 == 'L') && (l2 == 'S'))
         return 0.02680846684633323;
    else if ((l1 == 'F') && (l2 == 'E'))
         return 0.13491563402367066;
    else if ((l1 == 'E') && (l2 == 'J'))
         return 0.00868484768824672;
    else if ((l1 == 'C') && (l2 == 'R'))
         return 0.04786141919712958;
    else if ((l1 == 'T') && (l2 == 'Q'))
         return 0.020569488855526473;
    else if ((l1 == 'I') && (l2 == 'A'))
         return 0.019873027920675173;
    else if ((l1 == 'B') && (l2 == 'O'))
         return 0.14959826328180062;
    else if ((l1 == 'B') && (l2 == 'R'))
         return 0.1487069228798728;
    else if ((l1 == 'C') && (l2 == 'U'))
         return 0.04455262307542229;
    else if ((l1 == 'M') && (l2 == 'B'))
         return 0.04805504597064346;
    else if ((l1 == 'U') && (l2 == 'M'))
         return 0.02143108845020359;
    else if ((l1 == 'N') && (l2 == 'P'))
         return 0.018988857732204795;
    else if ((l1 == 'B') && (l2 == 'I'))
         return 0.1393037713870077;
    else if ((l1 == 'C') && (l2 == 'T'))
         return 0.04212758015668697;
    else if ((l1 == 'I') && (l2 == 'G'))
         return 0.017887024868824836;
    else if ((l1 == 'B') && (l2 == 'E'))
         return 0.1347882996805381;
    else if ((l1 == 'I') && (l2 == 'Q'))
         return 0.01770766071885406;
    else if ((l1 == 'H') && (l2 == 'O'))
         return 0.15171581612288995;
    else if ((l1 == 'S') && (l2 == 'R'))
         return 0.015429367807721412;
    else if ((l1 == 'F') && (l2 == 'F'))
         return 0.10891485319604549;
    else if ((l1 == 'S') && (l2 == 'F'))
         return 0.014930968529871571;
    else if ((l1 == 'P') && (l2 == 'I'))
         return 0.04277531394623724;
    else if ((l1 == 'D') && (l2 == 'R'))
         return 0.03176628161290634;
    else if ((l1 == 'N') && (l2 == 'F'))
         return 0.016586893999389007;
    else if ((l1 == 'E') && (l2 == 'Z'))
         return 0.006790637387847162;
    else if ((l1 == 'A') && (l2 == 'F'))
         return 0.014362400511290266;
    else if ((l1 == 'S') && (l2 == 'N'))
         return 0.014230641675750015;
    else if ((l1 == 'E') && (l2 == 'O'))
         return 0.006511450349051612;
    else if ((l1 == 'G') && (l2 == 'A'))
         return 0.11649133406733811;
    else if ((l1 == 'B') && (l2 == 'A'))
         return 0.11598199669480792;
    else if ((l1 == 'P') && (l2 == 'P'))
         return 0.03939224334458735;
    else if ((l1 == 'N') && (l2 == 'U'))
         return 0.015145715759699538;
    else if ((l1 == 'C') && (l2 == 'L'))
         return 0.03381788707072201;
    else if ((l1 == 'T') && (l2 == 'M'))
         return 0.014484573209185586;
    else if ((l1 == 'E') && (l2 == 'X'))
         return 0.005945973665776866;
    else if ((l1 == 'I') && (l2 == 'F'))
         return 0.01391631850534134;
    else if ((l1 == 'J') && (l2 == 'O'))
         return 0.22602063571571115;
    else if ((l1 == 'S') && (l2 == 'V'))
         return 0.012485660597563805;
    else if ((l1 == 'P') && (l2 == 'U'))
         return 0.036138116256340364;
    else if ((l1 == 'R') && (l2 == 'N'))
         return 0.015130217144984446;
    else if ((l1 == 'G') && (l2 == 'N'))
         return 0.09746954219322977;
    else if ((l1 == 'V') && (l2 == 'R'))
         return 0.05713985307349124;
    else if ((l1 == 'F') && (l2 == 'R'))
         return 0.08198092852142562;
    else if ((l1 == 'N') && (l2 == 'L'))
         return 0.01279979784731612;
    else if ((l1 == 'N') && (l2 == 'V'))
         return 0.012679699660675331;
    else if ((l1 == 'J') && (l2 == 'A'))
         return 0.198573010640473;
    else if ((l1 == 'Y') && (l2 == 'A'))
         return 0.30437455663790886;
    else if ((l1 == 'O') && (l2 == 'C'))
         return 0.016072695837326963;
    else if ((l1 == 'R') && (l2 == 'P'))
         return 0.012762096341603583;
    else if ((l1 == 'S') && (l2 == 'B'))
         return 0.010062529682303221;
    else if ((l1 == 'N') && (l2 == 'Q'))
         return 0.01146537355130735;
    else if ((l1 == 'N') && (l2 == 'M'))
         return 0.011385308093546825;
    else if ((l1 == 'I') && (l2 == 'P'))
         return 0.01069036328630172;
    else if ((l1 == 'R') && (l2 == 'Q'))
         return 0.01165601937422388;
    else if ((l1 == 'G') && (l2 == 'U'))
         return 0.07864364930855611;
    else if ((l1 == 'I') && (l2 == 'B'))
         return 0.0104122188798253;
    else if ((l1 == 'G') && (l2 == 'I'))
         return 0.07459833517672976;
    else if ((l1 == 'R') && (l2 == 'V'))
         return 0.010897648361660824;
    else if ((l1 == 'O') && (l2 == 'P'))
         return 0.013611046945089694;
    else if ((l1 == 'Y') && (l2 == 'E'))
         return 0.24943783342756612;
    else if ((l1 == 'E') && (l2 == 'H'))
         return 0.0039747274114239365;
    else if ((l1 == 'R') && (l2 == 'G'))
         return 0.010292382440313328;
    else if ((l1 == 'H') && (l2 == 'I'))
         return 0.0786691161771826;
    else if ((l1 == 'S') && (l2 == 'J'))
         return 0.00806893257090386;
    else if ((l1 == 'U') && (l2 == 'B'))
         return 0.010244212177677056;
    else if ((l1 == 'N') && (l2 == 'R'))
         return 0.00912212448751595;
    else if ((l1 == 'T') && (l2 == 'H'))
         return 0.008703640156768734;
    else if ((l1 == 'S') && (l2 == 'G'))
         return 0.0076300610756543505;
    else if ((l1 == 'F') && (l2 == 'U'))
         return 0.0554032951338401;
    else if ((l1 == 'O') && (l2 == 'Y'))
         return 0.0116298514550654;
    else if ((l1 == 'L') && (l2 == 'Q'))
         return 0.010730065895642312;
    else if ((l1 == 'T') && (l2 == 'V'))
         return 0.008429924228040599;
    else if ((l1 == 'A') && (l2 == 'Q'))
         return 0.007380548509495022;
    else if ((l1 == 'C') && (l2 == 'C'))
         return 0.0184592819187316;
    else if ((l1 == 'T') && (l2 == 'F'))
         return 0.007915390919710302;
    else if ((l1 == 'T') && (l2 == 'N'))
         return 0.007854857589318504;
    else if ((l1 == 'O') && (l2 == 'B'))
         return 0.010722928178977985;
    else if ((l1 == 'J') && (l2 == 'U'))
         return 0.12427440091757833;
    else if ((l1 == 'L') && (l2 == 'N'))
         return 0.009574571715781672;
    else if ((l1 == 'U') && (l2 == 'F'))
         return 0.008440790030974496;
    else if ((l1 == 'O') && (l2 == 'D'))
         return 0.010193889601260327;
    else if ((l1 == 'F') && (l2 == 'L'))
         return 0.04694561862971537;
    else if ((l1 == 'T') && (l2 == 'B'))
         return 0.0072797909505964075;
    else if ((l1 == 'T') && (l2 == 'J'))
         return 0.007267947472911055;
    else if ((l1 == 'P') && (l2 == 'S'))
         return 0.018506787423669513;
    else if ((l1 == 'U') && (l2 == 'O'))
         return 0.008075935839445075;
    else if ((l1 == 'S') && (l2 == 'H'))
         return 0.006327453126988257;
    else if ((l1 == 'M') && (l2 == 'U'))
         return 0.01736682082956707;
    else if ((l1 == 'X') && (l2 == 'P'))
         return 0.11795269274827959;
    else if ((l1 == 'X') && (l2 == 'E'))
         return 0.11783682566306516;
    else if ((l1 == 'R') && (l2 == 'B'))
         return 0.007110085964954389;
    else if ((l1 == 'A') && (l2 == 'Y'))
         return 0.0057845966994336286;
    else if ((l1 == 'D') && (l2 == 'S'))
         return 0.012560302672860327;
    else if ((l1 == 'U') && (l2 == 'G'))
         return 0.007300062232151901;
    else if ((l1 == 'L') && (l2 == 'D'))
         return 0.008163599776500975;
    else if ((l1 == 'U') && (l2 == 'J'))
         return 0.007237515799318287;
    else if ((l1 == 'P') && (l2 == 'T'))
         return 0.016443691209223038;
    else if ((l1 == 'L') && (l2 == 'H'))
         return 0.007979922956002897;
    else if ((l1 == 'P') && (l2 == 'H'))
         return 0.016029714666192664;
    else if ((l1 == 'A') && (l2 == 'E'))
         return 0.005443023375585572;
    else if ((l1 == 'O') && (l2 == 'E'))
         return 0.008144314975340555;
    else if ((l1 == 'L') && (l2 == 'T'))
         return 0.007198461574247434;
    else if ((l1 == 'O') && (l2 == 'F'))
         return 0.007735839610912295;
    else if ((l1 == 'G') && (l2 == 'O'))
         return 0.04140325141702163;
    else if ((l1 == 'I') && (l2 == 'X'))
         return 0.0054680070936743265;
    else if ((l1 == 'G') && (l2 == 'L'))
         return 0.04095268374132184;
    else if ((l1 == 'O') && (l2 == 'G'))
         return 0.00734715820687483;
    else if ((l1 == 'X') && (l2 == 'D'))
         return 0.09255462766927872;
    else if ((l1 == 'S') && (l2 == 'Y'))
         return 0.00463032771716702;
    else if ((l1 == 'R') && (l2 == 'F'))
         return 0.005378710634385903;
    else if ((l1 == 'X') && (l2 == 'A'))
         return 0.08657588607221464;
    else if ((l1 == 'X') && (l2 == 'C'))
         return 0.08581116330979946;
    else if ((l1 == 'H') && (l2 == 'U'))
         return 0.04112300062743035;
    else if ((l1 == 'N') && (l2 == 'B'))
         return 0.004810599587111615;
    else if ((l1 == 'L') && (l2 == 'P'))
         return 0.005997883083900901;
    else if ((l1 == 'A') && (l2 == 'A'))
         return 0.004123361250684552;
    else if ((l1 == 'A') && (l2 == 'J'))
         return 0.00408489053502931;
    else if ((l1 == 'U') && (l2 == 'U'))
         return 0.004999247024343927;
    else if ((l1 == 'B') && (l2 == 'U'))
         return 0.03260738679140407;
    else if ((l1 == 'X') && (l2 == 'I'))
         return 0.0766344901608174;
    else if ((l1 == 'L') && (l2 == 'Y'))
         return 0.005411787047584304;
    else if ((l1 == 'L') && (l2 == 'F'))
         return 0.005410117258307049;
    else if ((l1 == 'N') && (l2 == 'J'))
         return 0.0042181151996837215;
    else if ((l1 == 'N') && (l2 == 'H'))
         return 0.0041980988352435895;
    else if ((l1 == 'L') && (l2 == 'C'))
         return 0.005149630131055228;
    else if ((l1 == 'B') && (l2 == 'S'))
         return 0.030109674676111777;
    else if ((l1 == 'Y') && (l2 == 'S'))
         return 0.10118672551775297;
    else if ((l1 == 'L') && (l2 == 'M'))
         return 0.004864096164644578;
    else if ((l1 == 'A') && (l2 == 'H'))
         return 0.0032245454394666294;
    else if ((l1 == 'X') && (l2 == 'T'))
         return 0.06358785636567371;
    else if ((l1 == 'T') && (l2 == 'G'))
         return 0.003564886783290974;
    else if ((l1 == 'D') && (l2 == 'D'))
         return 0.006724639841077116;
    else if ((l1 == 'V') && (l2 == 'U'))
         return 0.01516120810030686;
    else if ((l1 == 'U') && (l2 == 'Q'))
         return 0.0037959727926877183;
    else if ((l1 == 'D') && (l2 == 'M'))
         return 0.006266141670094586;
    else if ((l1 == 'C') && (l2 == 'S'))
         return 0.00732037209424209;
    else if ((l1 == 'X') && (l2 == 'Q'))
         return 0.05410992879513415;
    else if ((l1 == 'Y') && (l2 == 'R'))
         return 0.07743397304879689;
    else if ((l1 == 'I') && (l2 == 'J'))
         return 0.00288542328213858;
    else if ((l1 == 'D') && (l2 == 'H'))
         return 0.00550961968797341;
    else if ((l1 == 'Z') && (l2 == 'E'))
         return 0.1329520731529036;
    else if ((l1 == 'X') && (l2 == 'M'))
         return 0.04852513528779911;
    else if ((l1 == 'G') && (l2 == 'T'))
         return 0.020344110052792505;
    else if ((l1 == 'I') && (l2 == 'I'))
         return 0.0026293744593542108;
    else if ((l1 == 'N') && (l2 == 'Y'))
         return 0.0026848616835696447;
    else if ((l1 == 'R') && (l2 == 'J'))
         return 0.002821712522215749;
    else if ((l1 == 'Z') && (l2 == 'V'))
         return 0.12440108226407944;
    else if ((l1 == 'Z') && (l2 == 'L'))
         return 0.12212081802705964;
    else if ((l1 == 'L') && (l2 == 'V'))
         return 0.0031742694160622528;
    else if ((l1 == 'L') && (l2 == 'R'))
         return 0.0031542319447351893;
    else if ((l1 == 'X') && (l2 == 'S'))
         return 0.043450156955407514;
    else if ((l1 == 'C') && (l2 == 'Y'))
         return 0.00554080079815522;
    else if ((l1 == 'O') && (l2 == 'Q'))
         return 0.0032318138965337245;
    else if ((l1 == 'C') && (l2 == 'D'))
         return 0.005257275879795617;
    else if ((l1 == 'P') && (l2 == 'D'))
         return 0.005592076581262809;
    else if ((l1 == 'D') && (l2 == 'L'))
         return 0.004029689480524242;
    else if ((l1 == 'Y') && (l2 == 'P'))
         return 0.05191673039643262;
    else if ((l1 == 'X') && (l2 == 'L'))
         return 0.035316287573355226;
    else if ((l1 == 'C') && (l2 == 'Q'))
         return 0.004536398693753648;
    else if ((l1 == 'O') && (l2 == 'V'))
         return 0.0025948082621389925;
    else if ((l1 == 'L') && (l2 == 'G'))
         return 0.0023059789918895165;
    else if ((l1 == 'I') && (l2 == 'U'))
         return 0.001793641499707766;
    else if ((l1 == 'A') && (l2 == 'O'))
         return 0.0015376628469473913;
    else if ((l1 == 'Y') && (l2 == 'O'))
         return 0.04119405928187529;
    else if ((l1 == 'F') && (l2 == 'S'))
         return 0.010196717309887584;
    else if ((l1 == 'Z') && (l2 == 'D'))
         return 0.07600880790065952;
    else if ((l1 == 'Z') && (l2 == 'A'))
         return 0.07429860972289469;
    else if ((l1 == 'X') && (l2 == 'F'))
         return 0.026927510603831216;
    else if ((l1 == 'D') && (l2 == 'P'))
         return 0.0029343882942881963;
    else if ((l1 == 'H') && (l2 == 'Y'))
         return 0.012686764259889493;
    else if ((l1 == 'Z') && (l2 == 'P'))
         return 0.07132159808011886;
    else if ((l1 == 'M') && (l2 == 'D'))
         return 0.0036647103809246562;
    else if ((l1 == 'O') && (l2 == 'H'))
         return 0.001954203725855025;
    else if ((l1 == 'W') && (l2 == 'A'))
         return 0.34298974565172613;
    else if ((l1 == 'Y') && (l2 == 'L'))
         return 0.03661317130571947;
    else if ((l1 == 'Z') && (l2 == 'M'))
         return 0.06669772893282874;
    else if ((l1 == 'U') && (l2 == 'Y'))
         return 0.0014385679551731409;
    else if ((l1 == 'X') && (l2 == 'H'))
         return 0.022246480361168646;
    else if ((l1 == 'X') && (l2 == 'V'))
         return 0.022246480361168646;
    else if ((l1 == 'X') && (l2 == 'O'))
         return 0.02215378669299711;
    else if ((l1 == 'R') && (l2 == 'H'))
         return 0.0013507589355840097;
    else if ((l1 == 'D') && (l2 == 'C'))
         return 0.00239692654941423;
    else if ((l1 == 'F') && (l2 == 'T'))
         return 0.007779026433583123;
    else if ((l1 == 'T') && (l2 == 'Y'))
         return 0.0011922434203254422;
    else if ((l1 == 'H') && (l2 == 'T'))
         return 0.00997056715402769;
    else if ((l1 == 'R') && (l2 == 'Y'))
         return 0.0012591820585952632;
    else if ((l1 == 'H') && (l2 == 'R'))
         return 0.009780545134276042;
    else if ((l1 == 'S') && (l2 == 'W'))
         return 0.0010084706699350404;
    else if ((l1 == 'L') && (l2 == 'B'))
         return 0.0014360187784395251;
    else if ((l1 == 'Z') && (l2 == 'O'))
         return 0.054409638322222106;
    else if ((l1 == 'B') && (l2 == 'T'))
         return 0.008364886848861242;
    else if ((l1 == 'E') && (l2 == 'Y'))
         return 0.0004644011408536558;
    else if ((l1 == 'X') && (l2 == 'B'))
         return 0.019488843733065447;
    else if ((l1 == 'I') && (l2 == 'Z'))
         return 0.001072285679173121;
    else if ((l1 == 'K') && (l2 == 'E'))
         return 0.3919204157377757;
    else if ((l1 == 'U') && (l2 == 'H'))
         return 0.0012226338418189946;
    else if ((l1 == 'Y') && (l2 == 'M'))
         return 0.0278585853957328;
    else if ((l1 == 'X') && (l2 == 'R'))
         return 0.01788987795710645;
    else if ((l1 == 'D') && (l2 == 'N'))
         return 0.0018874841372114178;
    else if ((l1 == 'M') && (l2 == 'Y'))
         return 0.002446450742098754;
    else if ((l1 == 'Y') && (l2 == 'C'))
         return 0.024838592581822663;
    else if ((l1 == 'H') && (l2 == 'B'))
         return 0.008148591317585411;
    else if ((l1 == 'M') && (l2 == 'S'))
         return 0.0023901724435660358;
    else if ((l1 == 'C') && (l2 == 'P'))
         return 0.0020480151017677707;
    else if ((l1 == 'F') && (l2 == 'D'))
         return 0.005760042473721854;
    else if ((l1 == 'D') && (l2 == 'J'))
         return 0.0017244625653065181;
    else if ((l1 == 'D') && (l2 == 'Q'))
         return 0.00171936814118449;
    else if ((l1 == 'N') && (l2 == 'Z'))
         return 0.0008793856110697793;
    else if ((l1 == 'W') && (l2 == 'E'))
         return 0.20870751836056095;
    else if ((l1 == 'Z') && (l2 == 'C'))
         return 0.041488140979109994;
    else if ((l1 == 'M') && (l2 == 'L'))
         return 0.00208560753385956;
    else if ((l1 == 'X') && (l2 == 'N'))
         return 0.014552905902931157;
    else if ((l1 == 'O') && (l2 == 'O'))
         return 0.0010994645271615287;
    else if ((l1 == 'B') && (l2 == 'J'))
         return 0.005965124228286295;
    else if ((l1 == 'L') && (l2 == 'J'))
         return 0.0010169016698484544;
    else if ((l1 == 'M') && (l2 == 'N'))
         return 0.0019531880079002232;
    else if ((l1 == 'D') && (l2 == 'T'))
         return 0.0014926662677542388;
    else if ((l1 == 'X') && (l2 == 'J'))
         return 0.01348692871895849;
    else if ((l1 == 'G') && (l2 == 'M'))
         return 0.00569086564307773;
    else if ((l1 == 'C') && (l2 == 'M'))
         return 0.0017494090707294654;
    else if ((l1 == 'O') && (l2 == 'W'))
         return 0.0010364837440999027;
    else if ((l1 == 'B') && (l2 == 'B'))
         return 0.005524351502058244;
    else if ((l1 == 'E') && (l2 == 'W'))
         return 0.00030541204439669836;
    else if ((l1 == 'G') && (l2 == 'S'))
         return 0.005445991906284368;
    else if ((l1 == 'D') && (l2 == 'V'))
         return 0.0013831361491306344;
    else if ((l1 == 'A') && (l2 == 'Z'))
         return 0.0006283550223689492;
    else if ((l1 == 'Z') && (l2 == 'S'))
         return 0.033190512783287995;
    else if ((l1 == 'M') && (l2 == 'T'))
         return 0.001704901396726466;
    else if ((l1 == 'G') && (l2 == 'D'))
         return 0.004995424230584582;
    else if ((l1 == 'X') && (l2 == 'G'))
         return 0.011818442691870842;
    else if ((l1 == 'O') && (l2 == 'J'))
         return 0.0008871293156966181;
    else if ((l1 == 'C') && (l2 == 'K'))
         return 0.0014809652650485646;
    else if ((l1 == 'Y') && (l2 == 'T'))
         return 0.01659299422474219;
    else if ((l1 == 'K') && (l2 == 'I'))
         return 0.22565114845508297;
    else if ((l1 == 'P') && (l2 == 'C'))
         return 0.001577861414009227;
    else if ((l1 == 'H') && (l2 == 'M'))
         return 0.005119416767426774;
    else if ((l1 == 'M') && (l2 == 'C'))
         return 0.0014864091788935596;
    else if ((l1 == 'Z') && (l2 == 'Q'))
         return 0.02831328094299567;
    else if ((l1 == 'I') && (l2 == 'K'))
         return 0.000560188033604382;
    else if ((l1 == 'Z') && (l2 == 'I'))
         return 0.027299830170986878;
    else if ((l1 == 'Y') && (l2 == 'D'))
         return 0.01448917900606322;
    else if ((l1 == 'I') && (l2 == 'H'))
         return 0.0005445911509982275;
    else if ((l1 == 'H') && (l2 == 'N'))
         return 0.004538172942304084;
    else if ((l1 == 'W') && (l2 == 'I'))
         return 0.12858156669861573;
    else if ((l1 == 'F') && (l2 == 'C'))
         return 0.003418699730353324;
    else if ((l1 == 'U') && (l2 == 'Z'))
         return 0.0005912127103558353;
    else if ((l1 == 'X') && (l2 == 'U'))
         return 0.009153499731939184;
    else if ((l1 == 'D') && (l2 == 'Y'))
         return 0.0009755822193683846;
    else if ((l1 == 'H') && (l2 == 'L'))
         return 0.004236373263874995;
    else if ((l1 == 'D') && (l2 == 'F'))
         return 0.0009602989470023003;
    else if ((l1 == 'Z') && (l2 == 'B'))
         return 0.023816093142206653;
    else if ((l1 == 'Y') && (l2 == 'B'))
         return 0.012656823815600893;
    else if ((l1 == 'Z') && (l2 == 'U'))
         return 0.023372708429452806;
    else if ((l1 == 'N') && (l2 == 'K'))
         return 0.0004630452307150432;
    else if ((l1 == 'G') && (l2 == 'Y'))
         return 0.0033008979719745184;
    else if ((l1 == 'H') && (l2 == 'C'))
         return 0.00369984050222328;
    else if ((l1 == 'O') && (l2 == 'K'))
         return 0.0005938188117239025;
    else if ((l1 == 'O') && (l2 == 'A'))
         return 0.0005452336362192197;
    else if ((l1 == 'Z') && (l2 == 'T'))
         return 0.01900220197516488;
    else if ((l1 == 'D') && (l2 == 'G'))
         return 0.0007488803459381334;
    else if ((l1 == 'X') && (l2 == 'Y'))
         return 0.0066739441083505935;
    else if ((l1 == 'Z') && (l2 == 'R'))
         return 0.018242113896158287;
    else if ((l1 == 'H') && (l2 == 'S'))
         return 0.003085063379497357;
    else if ((l1 == 'E') && (l2 == 'K'))
         return 0.0001480620107898126;
    else if ((l1 == 'Y') && (l2 == 'V'))
         return 0.008924248427622078;
    else if ((l1 == 'Y') && (l2 == 'F'))
         return 0.008822450917040836;
    else if ((l1 == 'K') && (l2 == 'S'))
         return 0.11971387244353875;
    else if ((l1 == 'C') && (l2 == 'V'))
         return 0.0007480231888636335;
    else if ((l1 == 'T') && (l2 == 'Z'))
         return 0.0003250376653646624;
    else if ((l1 == 'G') && (l2 == 'G'))
         return 0.0023997626205749466;
    else if ((l1 == 'C') && (l2 == 'F'))
         return 0.0007329420761849312;
    else if ((l1 == 'H') && (l2 == 'D'))
         return 0.0026714860423908272;
    else if ((l1 == 'C') && (l2 == 'N'))
         return 0.0007148447409704885;
    else if ((l1 == 'F') && (l2 == 'Q'))
         return 0.0019680852045706482;
    else if ((l1 == 'S') && (l2 == 'X'))
         return 0.0002707930502603349;
    else if ((l1 == 'Y') && (l2 == 'N'))
         return 0.0078044758112284325;
    else if ((l1 == 'M') && (l2 == 'G'))
         return 0.0007514808098192384;
    else if ((l1 == 'P') && (l2 == 'M'))
         return 0.0007634813293593034;
    else if ((l1 == 'Z') && (l2 == 'N'))
         return 0.014124970134872562;
    else if ((l1 == 'W') && (l2 == 'N'))
         return 0.07030814730811007;
    else if ((l1 == 'A') && (l2 == 'X'))
         return 0.00025530565843933186;
    else if ((l1 == 'D') && (l2 == 'B'))
         return 0.0005425561689959946;
    else if ((l1 == 'K') && (l2 == 'A'))
         return 0.101186725517753;
    else if ((l1 == 'F') && (l2 == 'M'))
         return 0.0017899395610534775;
    else if ((l1 == 'C') && (l2 == 'B'))
         return 0.0006092769522195724;
    else if ((l1 == 'F') && (l2 == 'P'))
         return 0.0016711757987086968;
    else if ((l1 == 'G') && (l2 == 'H'))
         return 0.0018806302985730193;
    else if ((l1 == 'P') && (l2 == 'Y'))
         return 0.0006073918131347348;
    else if ((l1 == 'Z') && (l2 == 'F'))
         return 0.01133798051184838;
    else if ((l1 == 'Z') && (l2 == 'J'))
         return 0.01121129916534728;
    else if ((l1 == 'K') && (l2 == 'L'))
         return 0.07838408314755513;
    else if ((l1 == 'H') && (l2 == 'P'))
         return 0.0018331536023100238;
    else if ((l1 == 'J') && (l2 == 'Y'))
         return 0.0034626234710300446;
    else if ((l1 == 'F') && (l2 == 'N'))
         return 0.0013827495187285158;
    else if ((l1 == 'Y') && (l2 == 'I'))
         return 0.005327403053751583;
    else if ((l1 == 'Q') && (l2 == 'M'))
         return 0.0012092310347832198;
    else if ((l1 == 'O') && (l2 == 'X'))
         return 0.00027351654358191875;
    else if ((l1 == 'W') && (l2 == 'O'))
         return 0.04813891167041771;
    else if ((l1 == 'P') && (l2 == 'Q'))
         return 0.0005089875529062022;
    else if ((l1 == 'B') && (l2 == 'D'))
         return 0.0014398575723449678;
    else if ((l1 == 'N') && (l2 == 'X'))
         return 0.00019215709862526286;
    else if ((l1 == 'S') && (l2 == 'Z'))
         return 0.00016691123356563748;
    else if ((l1 == 'A') && (l2 == 'K'))
         return 0.00016320909671920758;
    else if ((l1 == 'G') && (l2 == 'C'))
         return 0.0013712929260428265;
    else if ((l1 == 'H') && (l2 == 'Q'))
         return 0.0015648872214841668;
    else if ((l1 == 'M') && (l2 == 'F'))
         return 0.00046346834085768005;
    else if ((l1 == 'S') && (l2 == 'K'))
         return 0.0001634095992950297;
    else if ((l1 == 'T') && (l2 == 'W'))
         return 0.00018159999117539844;
    else if ((l1 == 'F') && (l2 == 'H'))
         return 0.0011621882458024949;
    else if ((l1 == 'C') && (l2 == 'J'))
         return 0.0004102062648607022;
    else if ((l1 == 'P') && (l2 == 'F'))
         return 0.0004614820479682901;
    else if ((l1 == 'B') && (l2 == 'C'))
         return 0.0013223181786841541;
    else if ((l1 == 'H') && (l2 == 'V'))
         return 0.0015089983921454464;
    else if ((l1 == 'Q') && (l2 == 'A'))
         return 0.001060040192829446;
    else if ((l1 == 'Y') && (l2 == 'G'))
         return 0.004580887976155819;
    else if ((l1 == 'M') && (l2 == 'R'))
         return 0.0004336739475168292;
    else if ((l1 == 'M') && (l2 == 'W'))
         return 0.0004336739475168292;
    else if ((l1 == 'R') && (l2 == 'K'))
         return 0.00018744642008634033;
    else if ((l1 == 'H') && (l2 == 'J'))
         return 0.0014419317969389823;
    else if ((l1 == 'Y') && (l2 == 'Q'))
         return 0.004343360451466259;
    else if ((l1 == 'P') && (l2 == 'N'))
         return 0.0004275495444412099;
    else if ((l1 == 'M') && (l2 == 'V'))
         return 0.00041381101862292865;
    else if ((l1 == 'P') && (l2 == 'V'))
         return 0.0004139765430303778;
    else if ((l1 == 'J') && (l2 == 'I'))
         return 0.002554740487772167;
    else if ((l1 == 'C') && (l2 == 'G'))
         return 0.00035893048175311443;
    else if ((l1 == 'A') && (l2 == 'W'))
         return 0.00013523039442448628;
    else if ((l1 == 'R') && (l2 == 'W'))
         return 0.0001659830895421029;
    else if ((l1 == 'R') && (l2 == 'Z'))
         return 0.0001545359799185096;
    else if ((l1 == 'Q') && (l2 == 'H'))
         return 0.0008401800046870424;
    else if ((l1 == 'Z') && (l2 == 'G'))
         return 0.006587430018057159;
    else if ((l1 == 'F') && (l2 == 'J'))
         return 0.0008737619658223136;
    else if ((l1 == 'B') && (l2 == 'Y'))
         return 0.0009990848461169165;
    else if ((l1 == 'G') && (l2 == 'P'))
         return 0.0009794949471734476;
    else if ((l1 == 'Q') && (l2 == 'C'))
         return 0.000777362808074927;
    else if ((l1 == 'P') && (l2 == 'B'))
         return 0.00033253853456538545;
    else if ((l1 == 'P') && (l2 == 'G'))
         return 0.0003155722828018454;
    else if ((l1 == 'P') && (l2 == 'J'))
         return 0.0003087857820964294;
    else if ((l1 == 'M') && (l2 == 'Q'))
         return 0.0002880124689615583;
    else if ((l1 == 'N') && (l2 == 'W'))
         return 0.00011609491375276298;
    else if ((l1 == 'Y') && (l2 == 'J'))
         return 0.002918195303328892;
    else if ((l1 == 'M') && (l2 == 'J'))
         return 0.00027808100451460804;
    else if ((l1 == 'F') && (l2 == 'V'))
         return 0.0006871331964233728;
    else if ((l1 == 'K') && (l2 == 'R'))
         return 0.038004403950329765;
    else if ((l1 == 'D') && (l2 == 'W'))
         return 0.00020122975282011067;
    else if ((l1 == 'O') && (l2 == 'Z'))
         return 0.00014035717368019514;
    else if ((l1 == 'B') && (l2 == 'N'))
         return 0.0007248262609083512;
    else if ((l1 == 'G') && (l2 == 'Q'))
         return 0.0007248262609083512;
    else if ((l1 == 'G') && (l2 == 'F'))
         return 0.0007150313114366166;
    else if ((l1 == 'I') && (l2 == 'Y'))
         return 9.358129563692692e-05;
    else if ((l1 == 'M') && (l2 == 'H'))
         return 0.00023173417042884003;
    else if ((l1 == 'U') && (l2 == 'W'))
         return 0.0001012656531591859;
    else if ((l1 == 'H') && (l2 == 'F'))
         return 0.0007489103131388512;
    else if ((l1 == 'B') && (l2 == 'P'))
         return 0.0006464666651344753;
    else if ((l1 == 'K') && (l2 == 'O'))
         return 0.03135363325902205;
    else if ((l1 == 'B') && (l2 == 'H'))
         return 0.0005779020188323341;
    else if ((l1 == 'B') && (l2 == 'M'))
         return 0.0005681070693605996;
    else if ((l1 == 'Q') && (l2 == 'O'))
         return 0.00045542467543783604;
    else if ((l1 == 'Q') && (l2 == 'P'))
         return 0.00045542467543783604;
    else if ((l1 == 'K') && (l2 == 'D'))
         return 0.027078137814609955;
    else if ((l1 == 'X') && (l2 == 'X'))
         return 0.0013208847714443882;
    else if ((l1 == 'V') && (l2 == 'T'))
         return 0.0003244278386003761;
    else if ((l1 == 'Z') && (l2 == 'Z'))
         return 0.003547077702030778;
    else if ((l1 == 'L') && (l2 == 'Z'))
         return 9.18384102490394e-05;
    else if ((l1 == 'B') && (l2 == 'Q'))
         return 0.0005289272714736617;
    else if ((l1 == 'W') && (l2 == 'S'))
         return 0.017101981777648396;
    else if ((l1 == 'V') && (l2 == 'L'))
         return 0.0003070477758182131;
    else if ((l1 == 'V') && (l2 == 'Y'))
         return 0.0003012544215574921;
    else if ((l1 == 'W') && (l2 == 'H'))
         return 0.01615187167889015;
    else if ((l1 == 'Z') && (l2 == 'H'))
         return 0.0032303743357780298;
    else if ((l1 == 'Q') && (l2 == 'S'))
         return 0.0003769031796726919;
    else if ((l1 == 'K') && (l2 == 'P'))
         return 0.021852532271439615;
    else if ((l1 == 'L') && (l2 == 'K'))
         return 7.180093892197626e-05;
    else if ((l1 == 'Q') && (l2 == 'L'))
         return 0.00032979028221360546;
    else if ((l1 == 'H') && (l2 == 'G'))
         return 0.00045828840057750595;
    else if ((l1 == 'Q') && (l2 == 'D'))
         return 0.0003140859830605766;
    else if ((l1 == 'K') && (l2 == 'H'))
         return 0.01852714692578576;
    else if ((l1 == 'Y') && (l2 == 'U'))
         return 0.0012894351340290455;
    else if ((l1 == 'Z') && (l2 == 'Y'))
         return 0.002406945583520885;
    else if ((l1 == 'F') && (l2 == 'B'))
         return 0.0003138756576254913;
    else if ((l1 == 'W') && (l2 == 'Y'))
         return 0.011718024551351678;
    else if ((l1 == 'Y') && (l2 == 'H'))
         return 0.0012215701269748852;
    else if ((l1 == 'T') && (l2 == 'K'))
         return 4.6057968776369174e-05;
    else if ((l1 == 'K') && (l2 == 'Y'))
         return 0.01615187167889015;
    else if ((l1 == 'U') && (l2 == 'K'))
         return 5.063282657959295e-05;
    else if ((l1 == 'G') && (l2 == 'V'))
         return 0.00030364343362376876;
    else if ((l1 == 'B') && (l2 == 'V'))
         return 0.00029384848415203426;
    else if ((l1 == 'K') && (l2 == 'K'))
         return 0.014251651481373662;
    else if ((l1 == 'Q') && (l2 == 'E'))
         return 0.00023556448729543245;
    else if ((l1 == 'G') && (l2 == 'J'))
         return 0.0002840535346802998;
    else if ((l1 == 'K') && (l2 == 'J'))
         return 0.01377659643199454;
    else if ((l1 == 'Q') && (l2 == 'J'))
         return 0.00022771233771891802;
    else if ((l1 == 'Y') && (l2 == 'Z'))
         return 0.000950110098758244;
    else if ((l1 == 'B') && (l2 == 'F'))
         return 0.00026446363573683085;
    else if ((l1 == 'Q') && (l2 == 'F'))
         return 0.0002120080385658892;
    else if ((l1 == 'W') && (l2 == 'L'))
         return 0.008550990888824198;
    else if ((l1 == 'F') && (l2 == 'G'))
         return 0.00022056127292602093;
    else if ((l1 == 'H') && (l2 == 'W'))
         return 0.00029062191256134525;
    else if ((l1 == 'G') && (l2 == 'B'))
         return 0.0002448737367933619;
    else if ((l1 == 'K') && (l2 == 'F'))
         return 0.01187637623447805;
    else if ((l1 == 'W') && (l2 == 'R'))
         return 0.007917584156318703;
    else if ((l1 == 'K') && (l2 == 'C'))
         return 0.010451211086340685;
    else if ((l1 == 'K') && (l2 == 'W'))
         return 0.010451211086340685;
    else if ((l1 == 'V') && (l2 == 'M'))
         return 0.00012745379373586203;
    else if ((l1 == 'X') && (l2 == 'K'))
         return 0.0005098151749434481;
    else if ((l1 == 'K') && (l2 == 'Q'))
         return 0.009976156036961564;
    else if ((l1 == 'T') && (l2 == 'X'))
         return 2.7634781265821507e-05;
    else if ((l1 == 'V') && (l2 == 'S'))
         return 0.00012166043947514104;
    else if ((l1 == 'W') && (l2 == 'J'))
         return 0.00665077069130771;
    else if ((l1 == 'J') && (l2 == 'V'))
         return 0.000422271155003664;
    else if ((l1 == 'K') && (l2 == 'G'))
         return 0.009501100987582441;
    else if ((l1 == 'K') && (l2 == 'M'))
         return 0.009501100987582441;
    else if ((l1 == 'L') && (l2 == 'W'))
         return 3.3395785545105236e-05;
    else if ((l1 == 'W') && (l2 == 'K'))
         return 0.006334067325054961;
    else if ((l1 == 'X') && (l2 == 'Z'))
         return 0.0004634683408576801;
    else if ((l1 == 'J') && (l2 == 'H'))
         return 0.0004011575972534808;
    else if ((l1 == 'K') && (l2 == 'U'))
         return 0.009026045938203319;
    else if ((l1 == 'W') && (l2 == 'T'))
         return 0.006017363958802213;
    else if ((l1 == 'C') && (l2 == 'W'))
         return 5.4292005643328234e-05;
    else if ((l1 == 'Y') && (l2 == 'W'))
         return 0.0006107850634874426;
    else if ((l1 == 'H') && (l2 == 'H'))
         return 0.0001900220197516488;
    else if ((l1 == 'K') && (l2 == 'N'))
         return 0.008075935839445075;
    else if ((l1 == 'K') && (l2 == 'T'))
         return 0.008075935839445075;
    else if ((l1 == 'L') && (l2 == 'X'))
         return 2.8386417713339452e-05;
    else if ((l1 == 'W') && (l2 == 'C'))
         return 0.0053839572262967175;
    else if ((l1 == 'Q') && (l2 == 'G'))
         return 0.00012563439322423064;
    else if ((l1 == 'B') && (l2 == 'K'))
         return 0.00014692424207601713;
    else if ((l1 == 'J') && (l2 == 'S'))
         return 0.000316703366252748;
    else if ((l1 == 'M') && (l2 == 'Z'))
         return 4.965732223475144e-05;
    else if ((l1 == 'V') && (l2 == 'D'))
         return 8.110695965009403e-05;
    else if ((l1 == 'G') && (l2 == 'W'))
         return 0.00012733434313254817;
    else if ((l1 == 'Q') && (l2 == 'R'))
         return 0.0001020779444946874;
    else if ((l1 == 'V') && (l2 == 'P'))
         return 7.531360538937302e-05;
    else if ((l1 == 'W') && (l2 == 'D'))
         return 0.004117143761285725;
    else if ((l1 == 'W') && (l2 == 'Q'))
         return 0.004117143761285725;
    else if ((l1 == 'Y') && (l2 == 'X'))
         return 0.00044112254585204185;
    else if ((l1 == 'J') && (l2 == 'L'))
         return 0.0002533626930021984;
    else if ((l1 == 'Z') && (l2 == 'W'))
         return 0.0007600880790065953;
    else if ((l1 == 'W') && (l2 == 'P'))
         return 0.003483737028780229;
    else if ((l1 == 'Q') && (l2 == 'Q'))
         return 7.852149576514415e-05;
    else if ((l1 == 'Q') && (l2 == 'V'))
         return 7.852149576514415e-05;
    else if ((l1 == 'W') && (l2 == 'M'))
         return 0.0031670336625274804;
    else if ((l1 == 'G') && (l2 == 'Z'))
         return 8.815454524561028e-05;
    else if ((l1 == 'K') && (l2 == 'B'))
         return 0.004275495444412098;
    else if ((l1 == 'Q') && (l2 == 'B'))
         return 7.066934618862973e-05;
    else if ((l1 == 'V') && (l2 == 'F'))
         return 5.214018834648901e-05;
    else if ((l1 == 'W') && (l2 == 'V'))
         return 0.0028503302962747325;
    else if ((l1 == 'W') && (l2 == 'W'))
         return 0.0028503302962747325;
    else if ((l1 == 'P') && (l2 == 'Z'))
         return 2.714600282166412e-05;
    else if ((l1 == 'V') && (l2 == 'Q'))
         return 4.634683408576801e-05;
    else if ((l1 == 'B') && (l2 == 'G'))
         return 6.856464630214132e-05;
    else if ((l1 == 'H') && (l2 == 'K'))
         return 7.824436107420834e-05;
    else if ((l1 == 'K') && (l2 == 'V'))
         return 0.003325385345653854;
    else if ((l1 == 'Q') && (l2 == 'I'))
         return 5.4965047035600905e-05;
    else if ((l1 == 'W') && (l2 == 'B'))
         return 0.0022169235637692366;
    else if ((l1 == 'W') && (l2 == 'G'))
         return 0.0022169235637692366;
    else if ((l1 == 'W') && (l2 == 'U'))
         return 0.0022169235637692366;
    else if ((l1 == 'X') && (l2 == 'W'))
         return 0.00016221391930018806;
    else if ((l1 == 'J') && (l2 == 'C'))
         return 0.0001266813465010992;
    else if ((l1 == 'J') && (l2 == 'T'))
         return 0.0001266813465010992;
    else if ((l1 == 'R') && (l2 == 'X'))
         return 8.585332217694977e-06;
    else if ((l1 == 'V') && (l2 == 'C'))
         return 3.476012556432601e-05;
    else if ((l1 == 'W') && (l2 == 'F'))
         return 0.0019002201975164886;
    else if ((l1 == 'Y') && (l2 == 'K'))
         return 0.00020359502116248086;
    else if ((l1 == 'C') && (l2 == 'Z'))
         return 1.5081112678702288e-05;
    else if ((l1 == 'J') && (l2 == 'D'))
         return 0.000105567788750916;
    else if ((l1 == 'J') && (l2 == 'N'))
         return 0.000105567788750916;
    else if ((l1 == 'J') && (l2 == 'P'))
         return 0.000105567788750916;
    else if ((l1 == 'M') && (l2 == 'X'))
         return 1.6552440744917146e-05;
    else if ((l1 == 'Q') && (l2 == 'N'))
         return 3.9260747882572075e-05;
    else if ((l1 == 'F') && (l2 == 'Y'))
         return 3.3932503527080145e-05;
    else if ((l1 == 'J') && (l2 == 'K'))
         return 8.44542310007328e-05;
    else if ((l1 == 'J') && (l2 == 'M'))
         return 8.44542310007328e-05;
    else if ((l1 == 'P') && (l2 == 'K'))
         return 1.357300141083206e-05;
    else if ((l1 == 'B') && (l2 == 'Z'))
         return 2.9384848415203426e-05;
    else if ((l1 == 'D') && (l2 == 'Z'))
         return 7.641636183042178e-06;
    else if ((l1 == 'F') && (l2 == 'W'))
         return 2.5449377645310107e-05;
    else if ((l1 == 'H') && (l2 == 'Z'))
         return 3.353329760323214e-05;
    else if ((l1 == 'I') && (l2 == 'W'))
         return 3.899220651538622e-06;
    else if ((l1 == 'J') && (l2 == 'R'))
         return 6.33406732505496e-05;
    else if ((l1 == 'M') && (l2 == 'K'))
         return 9.931464446950288e-06;
    else if ((l1 == 'Q') && (l2 == 'K'))
         return 2.3556448729543245e-05;
    else if ((l1 == 'V') && (l2 == 'N'))
         return 1.7380062782163006e-05;
    else if ((l1 == 'Y') && (l2 == 'Y'))
         return 0.00010179751058124043;
    else if ((l1 == 'D') && (l2 == 'K'))
         return 5.094424122028119e-06;
    else if ((l1 == 'D') && (l2 == 'X'))
         return 5.094424122028119e-06;
    else if ((l1 == 'J') && (l2 == 'F'))
         return 4.22271155003664e-05;
    else if ((l1 == 'Q') && (l2 == 'T'))
         return 1.570429915302883e-05;
    else if ((l1 == 'V') && (l2 == 'G'))
         return 1.1586708521442002e-05;
    else if ((l1 == 'V') && (l2 == 'V'))
         return 1.1586708521442002e-05;
    else if ((l1 == 'F') && (l2 == 'K'))
         return 8.483125881770036e-06;
    else if ((l1 == 'F') && (l2 == 'X'))
         return 8.483125881770036e-06;
    else if ((l1 == 'F') && (l2 == 'Z'))
         return 8.483125881770036e-06;
    else if ((l1 == 'G') && (l2 == 'K'))
         return 9.794949471734475e-06;
    else if ((l1 == 'J') && (l2 == 'B'))
         return 2.11135577501832e-05;
    else if ((l1 == 'J') && (l2 == 'J'))
         return 2.11135577501832e-05;
    else if ((l1 == 'K') && (l2 == 'Z'))
         return 0.00047505504937912205;
    else if ((l1 == 'V') && (l2 == 'H'))
         return 5.793354260721001e-06;
    else
        return 10e-9;






}

    //Instructions
    time(&u);
    srand(&u);

    lettre = 'A';
    for(i=0; i < 26; i = i + 1) {
        alphabet[i] = lettre;
        alphabet2[i] = lettre;
        alphabetmax[i] = lettre;
        lettre = lettre+1;
    }
    printf("Saisir le texte a dechiffrer (max 10 000 caractères)(en lettres majuscules) \n\n"); //On demande le texte à l'utilisateur
    scanf("%c", &Texte[0]);
    TailleTexte = 0;
    while (Texte[TailleTexte] != '\n') { //On récupère le texte et on le stocke dans un tableau de caractères "texte"
        TailleTexte = TailleTexte+1;
        scanf("%c", &Texte[TailleTexte]);
    }
    for (i2=0; i2<TailleTexte; i2 = i2+1){ //on convertit le texte en indice
        if (Texte[i2] != ' ') {
            Texteind[i2]= convertir_lettre_en_indice(Texte[i2]);
        }
        else {
            Texteind[i2]= -1;
        }
    }
    i = 0;
    qualite = 0;
    while (i<=TailleTexte) { // On calcule la qualité du premier texte, qui servira de référence au début
        if ((Texte[i] != ' ') && (Texte[i+1] != ' ')){
            q = proba_paire(Texte[i], Texte[i+1]);
            qualite = qualite + logf(q);
            }
        i = i+1;
    }
    printf("\n Combien d'iterations devra executer l'algorithme ? \n\n");
    scanf("%d", &NBiter); // on récupère le nombre d'itérations que devra faire l'algorithme
    for (ite = 1; ite <= NBiter; ite = ite +1){ // Cette boucle ce répètera le nombre de fois demandé, et cherche le meilleur alphabet possible en échangeant de lettres de l'alphabet de décryptage aléatoirement à chaque fois
        L1 = ((float) rand()/(RAND_MAX))*26; // On sélectionne la position de la première lettre
        while (L1 == 26){
            L1 = ((float) rand()/(RAND_MAX))*26;
        }
        L2 = ((float) rand()/(RAND_MAX))*26; // on sélectionne la position de la deuxième lettre
        while (L2 == 26){
            L2 = ((float) rand()/(RAND_MAX))*26;
        }
        for (i2 = 0; i2<26; i2 = i2+1){ // on établit le nouvel alphabet de décryptage en inversant les deux lettres dans l'alphabet de référence
            alphabet2[i2]=alphabet[i2];
        }
        alphabet2[L2]=alphabet[L1];
        alphabet2[L1]=alphabet[L2];
        for (i2 = 0; i2 <= TailleTexte; i2 = i2+1){ // on déchiffre le texte avec le nouvel alphabet
            if (Texte[i2] != ' '){
                Textedechiffre[i2] = alphabet2[Texteind[i2]];
            }
            else {
                Textedechiffre[i2] = Texte[i2];
            }
        }
        i2 = 0;
        qualite2 = 0;
        while (i2<=TailleTexte) { // On calcule la qualité du nouveau texte
            if ((Texte[i2] != ' ') && (Texte[i2+1] != ' ')){
                q = proba_paire(Textedechiffre[i2], Textedechiffre[i2+1]);
                qualite2 = qualite2 + logf(q);
            }
            i2 = i2+1;
        }
    if (qualite2 > qualite) { // on change la qualité et l'alphabet de référence si on a trouvé un meilleur alphabet, et on stocke cet alphabet dans le tableau de caractères "meilleuralphabet"
        qualite = qualite2;
        for (i2 = 0; i2<26; i2 = i2+1){
             alphabetmax[i2]=alphabet2[i2];
        alphabet[L1] = alphabet2[L1];
        alphabet[L2] = alphabet2[L2];
        }
        numiter = ite;
    }
    else {
        r = (float) rand()/(RAND_MAX);
        if (r < expf(qualite2 - qualite)){
            alphabet[L1] = alphabet2[L2];
            alphabet[L2] = alphabet2[L2];
        }
    }
}
i2 = 0;
printf("\n");
for (i=0; i<TailleTexte; i=i+1){//on écrit le texte déchiffré avec le meilleur alphabet
    if ((i%80 == 0)&&(i!=0)){ // Tous les 80 caractères, pour une meilleure lecture, on va à la ligne (lorsqu'il y a un espace pour éviter de couper un mot)
        i2 = 1;
    }
    if ((i2 == 1) && (Texte[i] == ' ')){
        printf("\n");
        i2 = 0;
    }
    else if (Texte[i] != ' '){ // on déchiffre le texte avec le meilleur alphabet
        Textedechiffre[i] = alphabetmax[Texteind[i]];
    }
    else{
        Textedechiffre[i] = Texte[i];//lorsqu'il y a un espace, le caractère reste un espace
    }

    printf("%c", Textedechiffre[i]);//on affiche le texte
}

    return 0;
}
