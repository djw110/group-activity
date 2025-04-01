from datetime import datetime

date_str = "2022-03-1710:45:30"
date_obj = datetime.strptime(date_str, '%Y-%m-%d %H:%m:%S')
formatted_date = date_obj.strftime('%m/%d/%Y %H:%m:%S')

print(formatted_date)
