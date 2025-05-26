
void dokter :: tambahPasien(pasien* pPasien) {
    daftar_pasien.push_back(pPasien);
    pPasien-> tambahDokter(this);
}