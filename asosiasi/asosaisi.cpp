
void dokter :: cetakPasien() {
    cout << "Daftar pasien dari dokter \"" << this->nama << "\" :\n";
    for (auto& a : daftar_pasien) {
        cout << a->nama << "\n";
    }
    cout << endl;
}