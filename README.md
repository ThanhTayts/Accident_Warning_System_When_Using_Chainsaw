#### - Hiện nay về ý thức an toàn lao động của người lao động nước ta hiện nay còn thấp thì việc nhắc nhở của doanh nghiệp dẫn đến tai nạn lao động đáng tiếc xảy ra.
#### - Đặc biệt là ngành chế biến gỗ, khi người lao động vẫn đang sử dụng các máy móc nguy hiểm như cưa máy, luôn tiềm ẩn những rủi ro về tai nạn lao động.
#### - Chính vì thế em đã quyết định xây dựng hệ thống cảnh báo tai nạn lao động khi sử dụng cưa máy nhằm hạn chế rủi ro và đảm bảo an toàn người lao động.

#### - Các thành phần trong hệ thống
          * Phần mềm
            1. OpenCV 4.5.5
            2. Numpy 1.2.4
            3. YOLOv4 Tiny
          * Phần cứng
            1. Camera
            2. Arduino Uno
            3. Còi cảnh báo
            5. Động cơ 5v
   ![image](https://user-images.githubusercontent.com/92384494/215649925-ae1fd728-3f99-488c-9fe5-038ed4bb946e.png)
   ![image](https://user-images.githubusercontent.com/92384494/215655932-1ed1c40f-5d95-4653-a203-7c9b9a5ec2f5.png)
#### - Quá trình hoạt động của hệ thống
  * Bắt đầu hệ thống sẽ khởi chạy các thư viện ,mô hình phát hiện đối tượng, khởi động camera, loa và động cơ
  * Bộ xử lý trung tâm thu nhận hình ảnh đầu vào từ camera sau đó tiến hành trích xuất, định dạng lại và tiến hành các quá trình tiền xử lý ảnh
  * Ảnh sau khi được biến đổi và chuẩn hoá sẽ được được qua mô hình để phát hiện bàn tay có nằm trong vùng nguy hiểm hay không
  * Nếu có loa sẽ phát cảnh báo và động cơ sẽ ngừng
        
   ![image](https://user-images.githubusercontent.com/92384494/215655345-96affbfc-17c8-4b6e-b16e-2346cabb5f8f.png)
   ![image](https://user-images.githubusercontent.com/92384494/215655896-04fd2640-791d-4daa-bb87-5ac0cab70b1c.png)

#### - Kết quả
   ![image](https://user-images.githubusercontent.com/92384494/215656059-e38c432a-4731-452b-9a24-947b489e2694.png)
   ![image](https://user-images.githubusercontent.com/92384494/215656096-a191deb4-6456-4191-a308-da82fb9109be.png)
   ![image](https://user-images.githubusercontent.com/92384494/215656108-055e7c37-39da-4c23-a8d5-74aaf01cb22d.png)
   ![image](https://user-images.githubusercontent.com/92384494/215656132-1a77a034-39d5-47ff-af06-a4cae3efa273.png)
   ![image](https://user-images.githubusercontent.com/92384494/215656332-40e62dcc-d151-4ce2-bcaf-bff63cc95a5a.png)
#### * Thống kê xác xuất phát hiện.
         * Ánh sáng ban ngày Ánh sáng ban đêm
         * Phát hiện bàn tay >85% <80%
         * Phát hiện găng tay >85% < 72%
#### * Link
   [Video Demo](https://www.youtube.com/watch?v=0ofEC2D2mNk)

   





                  
                  
            
          

