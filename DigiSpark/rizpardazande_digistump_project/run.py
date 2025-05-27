# import main


# if(main.is_device_attached()):
#     print("device attached")
# else:
#     print("device required!")


import main as keyfinder
import triger
if __name__ == "__main__":
    try:
        if (keyfinder.is_device_attached()):
            triger.check_key()
    except KeyboardInterrupt:
        print("\nExiting...")