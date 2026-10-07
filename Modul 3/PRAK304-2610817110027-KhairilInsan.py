whole_number = int(input("Masukkan nilai: "))

if (whole_number == 0):
    print("Nol")
elif (whole_number < 10):
    print("Satuan")
elif (whole_number < 20):
    print("Belasan")
elif (whole_number < 100):
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")
