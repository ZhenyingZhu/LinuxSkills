n=1:256;%�����ź�ȡֵ
wn=0.2;%�˲�����ֹƵ��
N=256;%������
Nf=64;%�˲�������
m=4;%�˲�������

x=sin(pi*n/5)+sin(pi*n/1.5);%�����ź�
X=abs(fft(x,N));
figure(1);
subplot(2,1,1);plot(x);
title('�����ź�ʱ����');
subplot(2,1,2);stem(X);
title('�����ź�Ƶ����')

xx=reshape(x,4,64);
x1=xx(1,:);
x2=xx(2,:);
x3=xx(3,:);
x4=xx(4,:);
figure(2);
subplot(2,2,1);plot(x1);
title('��һ·�����ź�');
subplot(2,2,2);plot(x2);
title('�ڶ�·�����ź�');
subplot(2,2,3);plot(x3);
title('����·�����ź�');
subplot(2,2,4);plot(x4);
title('����·�����ź�');

hn=fir1(Nf-1,wn,'low');%N-1Ϊ�˲�������
hh=reshape(hn,m,16);
h1=hh(1,:);
h2=hh(2,:);
h3=hh(3,:);
h4=hh(4,:);
figure(3);
freqz(hn);
title('�˲�����Ƶ������');

%ÿ��x��ÿ��h�������A��i��j��
A=zeros(1000);
xxx=[x1;x2;x3;x4];
hhh=[h1;h2;h3;h4];

for i=1:1:4;
    for k=1:1:4;
        A(i,k)=conv(xxx(i,:),hhh(k,:));
    end;
end;

%i+k��ͬ�Ľ����ӵ�yy
for l=2:1:8;
    for i=1:1:4;
        for k=1:1:4;
           if i+k==l;
               y(l-1)=sum(A(i,k),2);
           end;
        end;
    end;
end;


figure(3);
subplot(2,1,1);plot(y);
subplot(2,1,2);plot(abs(fft(y,128)));
   
