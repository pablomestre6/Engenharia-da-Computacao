using System;
using System.Net;
using System.Net.Mail;



class Program
{
    static void Main(string[] args)
    {
        EmailService.EnviarEmail();
        Console.ReadLine();
    }
}
class EmailService
{
    public static void EnviarEmail()
    {
        try
        {
            var smtp = new SmtpClient("smtp.titan.email", 587)
            {
                Credentials = new NetworkCredential(
                    "no-replay@justiontecnologia.online",
                    "Pablo@2020"
                ),
                EnableSsl = true
            };

            var mail = new MailMessage
            {
                From = new MailAddress("no-replay@justiontecnologia.online", "Sistema JURIDICO"),
                Subject = "Teste de envio de e-mail",
                Body = "<h2>Email enviado com sucesso </h2><p>Esse email foi usado na plataforma C# aspnet </p>",
                IsBodyHtml = true
            };

            mail.To.Add("pablomestre44@gmail.com, pablomestre6@gmail.com, leidibr@gmail.com");

            smtp.Send(mail);

            Console.WriteLine("E-mail enviado com sucesso!");
        }
        catch (Exception ex)
        {
            Console.WriteLine("Erro ao enviar e-mail: " + ex.Message);
        }
    }
}
