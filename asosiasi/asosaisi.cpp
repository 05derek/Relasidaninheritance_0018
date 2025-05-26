
}
void pasien :: cetakDokter() {
    cout << "Daftar pasien dari dokter \"" << this->nama << "\" :\n";
    for (auto& a : daftar_dokter) {
        cout << a->nama << "\n";
    }
    cout << endl;
}