# Telefon Rehberi Uygulaması

Bu proje, basit bir **Telefon Rehberi Uygulaması** sağlar. Kullanıcılar, kişi ekleyebilir, silebilir, arayabilir ve rehberlerini bir dosyaya kaydedebilir veya dosyadan yükleyebilir. Proje, **C++** dili kullanılarak geliştirilmiştir ve temel bağlı liste (Linked List) veri yapısını içermektedir.

---

## Özellikler
- **Kişi Ekleme:** Kullanıcılar, isim ve numara girerek rehbere kişi ekleyebilir.
- **Kişi Silme:** Girilen isimle eşleşen kişiyi rehberden kaldırır.
- **Kişi Arama:** Girilen isim ile rehberde arama yapar ve eşleşen kişiyi gösterir.
- **Listeleme:** Rehberdeki tüm kişileri sıralı şekilde görüntüler.
- **Dosya Kaydetme:** Rehberdeki kişileri bir dosyaya kaydeder.
- **Dosyadan Yükleme:** Daha önce kaydedilmiş rehber verilerini dosyadan yükler.

---

## Kurulum

### 1. Projeyi Klonlayın
```bash
git clone <repository-link>
cd phonebook-app
```

### 2. Derleme
Derlemek için şu komutu kullanın:
```bash
g++ main.cpp phoneController.cpp Node.cpp -o phonebook
```

### 3. Çalıştırma
```bash
./phonebook
```

---

## Kullanım

Program başlatıldığında, aşağıdaki menü görünür:
```
--- Telefon Rehberi Uygulamasi ---
1. Kişi Ekle
2. Kişi Sil
3. Kişi Ara
4. Kişileri Listele
5. Rehberi Kaydet
6. Rehberi Yükle
7. Çıkış
Seçiminizi yapiniz:
```
Kullanıcı, menüden bir seçenek seçerek işlemlerini gerçekleştirebilir.

### Örnek Kullanım:
- **Kişi Ekle:**
```
1
İsim: Ali
Numara: 5551234
Kisi eklendi: Ali - 5551234
```
- **Kaydetme:**
```
5
Rehber dosyaya kaydedildi: rehber.txt
```
- **Yükleme:**
```
6
Rehber dosyadan yüklendi: rehber.txt
```

---

## Proje Yapısı
```
├── main.cpp            // Ana dosya ve menü kontrolü
├── phoneController.h   // Rehber işlemleri için sınıf tanımı
├── phoneController.cpp // İşlevlerin uygulanması
├── Node.h              // Düğüm sınıfı tanımı
├── Node.cpp            // Düğüm sınıfı uygulaması
└── rehber.txt          // Kaydedilen veriler
```

---

## Gereksinimler
- C++ derleyicisi (g++)
- İşletim sistemi: Windows, Linux veya macOS

---

## Geliştirme Planları
- **GUI Arayüzü:** Qt veya wxWidgets ile grafiksel arayüz desteği eklenmesi.
- **Dosya Formatları:** JSON ve CSV desteği.
- **Sıralama Algoritmaları:** Alfabetik sıralama için eklentiler.

---

## Katkıda Bulunma
Katkıda bulunmak istiyorsanız, lütfen bir pull request oluşturun veya bir issue açın.

---

## Lisans
Bu proje **MIT Lisansı** altında lisanslanmıştır.

