# Generador de claves

Un programa simple de generación de contraseñas seguras, con longitud ajustable e historial de sesión. Desarrollado en Qt6 (Widgets) y C++.

Empaquetado como Appimage para compatibilidad completa en Linux.

## 📥 Descarga
La versión AppImage lista para usar, disponible en la sección de **[Releases](https://github.com/maxipardo/GeneradorDeClaves/releases)**.

## 📦 Compilación desde el código fuente
**Requisitos (Ubuntu/Debian):**
```bash
sudo apt install build-essential cmake qt6-base-dev
```
**Compilación:**
```bash
git clone https://github.com/maxipardo/GeneradorDeClaves.git
cd GeneradorDeClaves
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j$(nproc)
./GeneradorDeClaves
```
## 📸 Screenshots ##
<table>
  <tr>
    <td valign="top">
      <img src="https://github.com/user-attachments/assets/ba61eb67-901f-452a-8713-67d9a6ad4b69" alt="captura_1" width="400" />
    </td>
    <td valign="top">
      <img src="https://github.com/user-attachments/assets/9af59c82-edec-4130-bb9e-318f01b97921" alt="captura_2" width="550" />
    </td>
  </tr>
</table>
