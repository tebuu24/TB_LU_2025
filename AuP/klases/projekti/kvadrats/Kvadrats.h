//klases kvadrāts deklarācija

class Kvadrats {
    float a;
public:
    Kvadrats (float a); // nav jēga likt const jo a tiek nodots kā kopija, tur nav būtiski, ka nevar manīt
    Kvadrats(const Kvadrats &cits); //const klāt lai kompilātoram pateiktu, ka originālo vērtību nemaina
    ~Kvadrats();

    float laukums(); // float laukums() const;
    void mainit(float v);
    void drukat(); //drukat () const; 
    // es noņēmu const no metodēm jo man tur bija kļūda tad metožu realizācijā, tur kaut kādā veidā var izlabot, bet man slinkums :P

};
