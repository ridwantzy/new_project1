# import plotly.express as px
# import pandas as pd

# def create_plot(data, x_col, y_col):
#     """
#     Membuat plot interaktif menggunakan Plotly.

#     Parameters:
#     data (pd.DataFrame): Data yang akan digunakan untuk membuat plot.
#     x_col (str): Nama kolom untuk sumbu x.
#     y_col (str): Nama kolom untuk sumbu y.

#     Returns:
#     fig (plotly.graph_objs.Figure): Plot interaktif yang telah dibuat.
#     """
#     fig = px.line(data, x=x_col, y=y_col)
#     fig.update_layout(title="Grafik Interaktif",
#                       xaxis_title=x_col,
#                       yaxis_title=y_col)
#     return fig

# # Contoh penggunaan
# data = pd.DataFrame({
#     "Tahun": [2010, 2011, 2012, 2013, 2014],
#     "Pendapatan": [100, 120, 150, 180, 200],
#     "Biaya": [50, 60, 70, 80, 90]
# })

# fig = create_plot(data, "Tahun", "Pendapatan")
# fig.show()

# import os

# os.system("cls")

# def penjumlahan(x, y):
#     """
#     Mengembalikan hasil penjumlahan x dan y.
    
#     Parameters:
#     x (int): Angka pertama.
#     y (int): Angka kedua.
    
#     Returns:
#     int: Hasil penjumlahan x dan y.
#     """
#     return x + y
#     input("klik enter untuk lanjut")
    

# def pengurangan(x, y):
#     """
#     Mengembalikan hasil pengurangan x dan y.
    
#     Parameters:
#     x (int): Angka pertama.
#     y (int): Angka kedua.
    
#     Returns:
#     int: Hasil pengurangan x dan y.
#     """
#     return x - y
#     input("klik enter untuk lanjut")

# def perkalian(x, y):
#     """
#     Mengembalikan hasil perkalian x dan y.
    
#     Parameters:
#     x (int): Angka pertama.
#     y (int): Angka kedua.
    
#     Returns:
#     int: Hasil perkalian x dan y.
#     """
#     return x * y
#     input("klik enter untuk lanjut")

# def pembagian(x, y):
#     """
#     Mengembalikan hasil pembagian x dan y.
    
#     Parameters:
#     x (int): Angka pertama.
#     y (int): Angka kedua.
    
#     Returns:
#     int: Hasil pembagian x dan y.
    
#     Raises:
#     ZeroDivisionError: Jika y adalah 0.
#     """
#     if y == 0:
#         raise ZeroDivisionError("Tidak dapat membagi dengan 0!")
#     return x / y
#     input("klik enter untuk lanjut")

# def main():
#     print("Kalkulator Sederhana")
#     print("---------------------")
    
#     while True:
#         print("Pilih operasi:")
#         print("1. Penjumlahan")
#         print("2. Pengurangan")
#         print("3. Perkalian")
#         print("4. Pembagian")
#         print("5. Keluar")
        
#         pilihan = input("Masukkan pilihan (1-5): ")
        
#         if pilihan == "5":
#             print("Terima kasih!")
#             break
        
#         elif pilihan in ["1", "2", "3", "4"]:
#             try:
#                 x = int(input("Masukkan angka pertama: "))
#                 y = int(input("Masukkan angka kedua: "))
                
#                 if pilihan == "1":
#                     hasil = penjumlahan(x, y)
#                     print(f"{x} + {y} = {hasil}")
                
#                 elif pilihan == "2":
#                     hasil = pengurangan(x, y)
#                     print(f"{x} - {y} = {hasil}")
                
#                 elif pilihan == "3":
#                     hasil = perkalian(x, y)
#                     print(f"{x} * {y} = {hasil}")
                
#                 elif pilihan == "4":
#                     hasil = pembagian(x, y)
#                     print(f"{x} / {y} = {hasil}")
            
#             except ValueError:
#                 print("Masukkan angka yang valid!")
            
#             except ZeroDivisionError as e:
#                 print(e)
        
#         else:
#             print("Pilihan tidak valid. Silakan coba lagi.")
        

# if __name__ == "__main__":
#     main()



import tkinter as tk

class Kalkulator:
    def __init__(self):
        self.window = tk.Tk()
        self.window.title("Kalkulator")

        # Membuat label untuk menampilkan hasil
        self.label = tk.Label(self.window, text="", width=20, height=2, font=("Arial", 24))
        self.label.grid(row=0, column=0, columnspan=4)

        # Membuat tombol-tombol angka
        self.tombol_angka = []
        angka = [
            ['7', '8', '9'],
            ['4', '5', '6'],
            ['1', '2', '3'],
            ['0', '.', '='],
        ]
        for i, baris in enumerate(angka):
            for j, angka in enumerate(baris):
                tombol = tk.Button(self.window, text=angka, width=5, height=2, font=("Arial", 18), command=lambda angka=angka: self.tekan_angka(angka))
                tombol.grid(row=i+1, column=j)
                self.tombol_angka.append(tombol)

        # Membuat tombol-tombol operasi
        self.tombol_operasi = []
        operasi = ['+', '-', '*', '/']
        for i, op in enumerate(operasi):
            tombol = tk.Button(self.window, text=op, width=5, height=2, font=("Arial", 18), command=lambda op=op: self.tekan_operasi(op))
            tombol.grid(row=i+1, column=3)
            self.tombol_operasi.append(tombol)

        # Membuat tombol "C"
        self.tombol_c = tk.Button(self.window, text="C", width=5, height=2, font=("Arial", 18), command=self.tekan_c)
        self.tombol_c.grid(row=4, column=0, columnspan=2)

    def tekan_angka(self, angka):
        if angka == '=':
            try:
                hasil = eval(self.label.cget("text"))
                self.label.config(text=str(hasil))
            except Exception as e:
                self.label.config(text="Error")
        else:
            self.label.config(text=self.label.cget("text") + str(angka))

    def tekan_operasi(self, operasi):
        self.label.config(text=self.label.cget("text") + operasi)

    def tekan_c(self):
        self.label.config(text="")

    def run(self):
        self.window.mainloop()

if __name__ == "__main__":
    kalkulator = Kalkulator()
    kalkulator.run()