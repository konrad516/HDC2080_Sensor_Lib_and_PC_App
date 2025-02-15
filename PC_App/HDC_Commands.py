##
# @author: Krzysztof Półchłopek
# @date: 03.04.2022
#



## Class containing all funtions, configuration and data that can be used to controll sensor
class HDC2080():

    ## Class variable soring last received temperature
    temp = None

    ## Class variable soring last received humidity
    hum = None

    ## The Constructor
    def __init__(self):
        pass

    ## Method for initialization of sensor
    # 
    # This methods return command which user should send to initialize sensor
    def init(self,tempOffset, humOffset) -> str:
        command = "hdc_init " + tempOffset + " " + humOffset + "\n"
        return command

    def deinit(self) -> str:
        command = "hdc_deinit\n"
        return command

    def recv_temp(self) -> str:
        command = "hdc_getTemp\n"
        return command

    def recv_hum(self) -> str:
        command = "hdc_getHum\n"
        return command