

class pelajar : public orang {
public :
    string sekolah;

    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
        cout << "Pelajar dibuat\n" << endl;
    }
    ~pelajar() {
        cout << "Pelajar dihapus\n" << endl;
    }
    string perkenalan() {
        return "Hallo, nama saya " + nama + "dari sekolah " + sekolah + "\n\n"
    }
};