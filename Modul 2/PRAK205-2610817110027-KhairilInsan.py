A = int(input("Masukkan nilai A: "))
B = int(input("Masukkan nilai B: "))
C = (B ** 2) - (A ** 2)
base = C ** 0.5
tall = A
circumference = A + B + base
area = base * tall / 2

print(f"Alas: {base:.0f} cm")
print(f"Tinggi: {tall:.0f} cm")
print(f"Keliling: {circumference:.0f} cm")
print(f"Luas: {area:.0f} cm^2")
