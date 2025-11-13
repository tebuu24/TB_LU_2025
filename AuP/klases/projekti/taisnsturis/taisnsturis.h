/** Klases apraksts

Klase ”Taisnsturis” apraksta taisnstūri ar
platumu platums un augstumu augstums.

Realizētas metodes:
Taisnsturis(platums, augstums) – konstruktors,
~Taisnsturis() – destruktors,
setPlatums(platums) – uzstāda taisnstūra platumu,
getPlatums() – atgriež taisnstūra platumu,
setAugstums(augstums) – uzstāda taisnstūra augstumu,
getAugstums() – atgriež taisnstūra augstumu,
laukums() – atgriež taisnstūra laukumu,
print() – izdrukā taisnstūra raksturlielumus.

**/

class Taisnsturis {
    float platums;
    float augstums;

public:
    Taisnsturis (float platums, float augstums); // tipu neraksta (nedrīkst) jo tipam netiek klāt nemaz
    ~Taisnsturis();

    void setPlatums(float platums);
    void setAugstums(float garums);

    float getPlatums();
    float getAugstums();

    float laukums(); // nav jāpadod vertibas augstumam un garumam jo tā ir iekš klases ar pieeju privātajiem laukiem
    void print();
};
